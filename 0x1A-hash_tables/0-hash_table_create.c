#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table.
 *@size : size of the hash table array.
 *
 *Return: pointer to the newly created hash table, or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_tabe_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *)* size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
