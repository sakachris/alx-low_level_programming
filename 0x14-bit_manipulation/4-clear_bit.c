#include "main.h"

/**
 * clear_bit - set bit at index position to 0
 * @n: pointer to the number to clear bit
 * @index: position of index to clear
 *
 * Return: 1 if success or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n = *n & (~(1 << index));

	return (1);
}
