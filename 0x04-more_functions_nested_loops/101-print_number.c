#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 */

void print_number(int n)
{
	int h = n % 100;
	int t = n % 1000;


	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}

	if (n >= 0 && n < 10)
	{
		_putchar((n % 10) + 48);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar ((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar ((n / 100) + 48);
		_putchar((h / 10) + 48);
		_putchar ((h % 10) + 48);
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + 48);
		_putchar((t / 100) + 48);
		_putchar(((t % 100) / 10) + 48);
		_putchar(((t % 100) % 10) + 48);
	}
}
