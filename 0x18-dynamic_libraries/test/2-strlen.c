#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find its length
 *
 * Return: count, the length of string
 */

int _strlen(char *s)
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
