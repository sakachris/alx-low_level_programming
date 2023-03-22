#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int i, j, t;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			t = i * j;

			if (t > 9)
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((t % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
