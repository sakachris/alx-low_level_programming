#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *htemp;
	int comma = 0;

	if (!ht)
		exit(0);

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		htemp = ht->array[i];
		while (htemp)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", htemp->key, htemp->value);
			htemp = htemp->next;
			comma = 1;
		}
	}

	printf("}\n");
}
