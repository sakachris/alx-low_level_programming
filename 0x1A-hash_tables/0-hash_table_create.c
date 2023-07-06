#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (!htable)
		return (NULL);

	htable->size = size;

	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (!htable->array)
	{
		free(htable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}
