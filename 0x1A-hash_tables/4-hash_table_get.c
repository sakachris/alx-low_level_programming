#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with the element or NULL if key not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *htemp = NULL;

	if (!ht || !key || (strcmp(key, "") == 0))
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	htemp = ht->array[i];

	while (htemp)
	{
		if (strcmp(htemp->key, key) == 0)
		{
			return (htemp->value);
		}
		htemp = htemp->next;
	}
	return (NULL);
}
