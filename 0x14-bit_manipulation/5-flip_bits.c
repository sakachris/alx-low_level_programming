#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f;
	int count = 0;

	f = n ^ m;

	while (f > 0)
	{
		count++;
		f = f & (f - 1);
	}

	return (count);
}
