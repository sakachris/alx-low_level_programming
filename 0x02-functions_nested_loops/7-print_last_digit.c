#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i: The integer to print its last digit
 *
 * Return: The last digit
 */

int print_last_digit(int i)
{
	/* int l; */

	if (i < 0)
	{
		i = -1 * (i % 10);
	}
	else
	{
		i = i % 10;
	}

	_putchar(i + '0');
	return (i);
}
