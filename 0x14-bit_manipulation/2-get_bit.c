#include "main.h"

/**
 * get_bit - find the bit at given index
 * @n: number to find its bit
 * @index: position of bit to return
 *
 * Return: bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_value;

	if (index > 64)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
