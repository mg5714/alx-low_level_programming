#include "hash_tables.h"

/**
 * create_node - create new node.
 * @key: the key.
 * @size: the node size.
 * Return: node, or NULL.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
        if (new_node == NULL)
        {
                return (NULL);
        }

        new_node->key = strdup(key);
        new_node->value = strdup(value);

        if (new_node->key == NULL || new_node->value == NULL)
        {
                free(new_node->key);
                free(new_node->value);
                free(new_node);
                return (NULL);
        }
	new_node->next = NULL;
	return (new_node);
}

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
	hash_node_t *node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
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

	temp = create_node(key, value);
	if (temp == NULL)
	{
		return (0);
	}

	temp->next = ht->array[index];
	ht->array[index] = temp;

	return (1);
}
