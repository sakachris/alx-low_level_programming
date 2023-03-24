#include "main.h"
/**
 * print_triangle - prints a triangle followed by new line
 * @size: size o the triangle
 *
 */

void print_triangle(int size)
{
	int r, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				if (c < size - r - 1)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('\n');
		}
	}
}
