#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print its second half
 *
 */

void puts_half(char *str)
{
	int length = 0, i = 0, half;

	for (; str[i] != 0; i++)
		length++;

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length + 1) / 2;
	}

	for (i = half; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
