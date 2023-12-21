#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht : is the hash table you want to add or update the key/value
 * @key : is the key.
 * @value : is the value associated with the key
 *
 * Return: 1 if successed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
