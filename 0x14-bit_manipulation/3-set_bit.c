#include "main.h"

/**
 * set_bit - sets the bit at given index too 1
 * @n: pointer of number to set bit
 * @index: position of bit to set
 *
 * Return: 1 if succeess and -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n = ((1 << index) | *n);

	return (1);
}
