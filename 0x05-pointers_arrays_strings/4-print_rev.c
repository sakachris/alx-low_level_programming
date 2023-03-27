#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 *
 */
int strlength(char *s);

void print_rev(char *s)
{
	int length, i;
	char *start, *end, temp;

	length = strlength(s);
	start = s;
	end = s;

	for (i = 0; i < length - 1; i++)
		end++;

	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}

/**
 * strlength - returns the length of a string
 * @s: string to find its length
 *
 * Return: count, the length of string
 */

int strlength(char *s)
{
	/* declare a counter ans set to 0 */
	int count = 0;

	/* count while the length of the string is not null */
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
