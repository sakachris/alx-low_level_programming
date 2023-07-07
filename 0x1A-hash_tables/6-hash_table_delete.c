#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *htemp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			htemp = ht->array[i];

			while (htemp)
			{
				free(htemp->key);
				free(htemp->value);
				htemp = htemp->next;
				free(ht->array[i]);
				ht->array[i] = htemp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
