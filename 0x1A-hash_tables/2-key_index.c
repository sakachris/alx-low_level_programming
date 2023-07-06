#include "hash_tables.h"

/**
 * key_index - gives key index of a key
 * @key: key supplied
 * @size: size of the array of the hast table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;

	return (idx);
}
