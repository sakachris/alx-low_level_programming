#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hnode = NULL;
	unsigned long int i;
	char *hvalue;

	if (!ht || !key || (strcmp(key, "") == 0))
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	hvalue = strdup(value);

	if (ht->array[i] != NULL)
	{
		while (ht->array[i])
		{
			if (strcmp(ht->array[i]->key, key) == 0)
			{
				free(ht->array[i]->value);
				ht->array[i]->value = hvalue;
				return (1);
			}
			ht->array[i] = ht->array[i]->next;
		}
	}

	hnode = malloc(sizeof(hash_node_t));
	if (!hnode)
	{
		free(hvalue);
		return (0);
	}

	hnode->key = strdup(key);
	hnode->value = hvalue;
	hnode->next = ht->array[i];
	ht->array[i] = hnode;

	return (1);
}
