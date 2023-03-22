#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of the times table
 *
 * Return: the times table for n
 */

void print_times_table(int n)
{
	int i, j, t, h;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			/* printing first column of zeros */
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				t = i * j;

				if (t > 9 && t <= 99)
				{
					_putchar(' ');
					_putchar((t / 10) + '0');
				}
				else if (t > 99)
				{
					_putchar((t / 100) + '0');
					h = t % 100;
					_putchar((h / 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}

				_putchar((t % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
