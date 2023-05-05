#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *b;

	b = (char *) &n;
	return ((int) *b);
}
