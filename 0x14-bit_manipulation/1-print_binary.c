#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print its binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	int b, i, count = 0;

	m = n;
	while (m)
	{
		count++;
		m = m >> 1;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = (count - 1); i >= 0; i--)
	{
		b = n & (1 << i);
		if (b == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}
