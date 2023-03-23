#include "main.h"
/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int l, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < n; l++)
		{
			for (d = 0; d < l; d++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
