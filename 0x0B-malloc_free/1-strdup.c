#include "main.h"
#include <stdlib.h>

/**
 * length - finds the length of a string
 * @str: string to determine length
 *
 * Return: length of string
 */

int length(char *str)
{
	int count = 0;

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL if limited memory
 */

char *_strdup(char *str)
{
	int size;
	char *duplicate;
	char *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	size = length(str);
	duplicate = malloc(sizeof(str) * (size + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	temp = duplicate;
	while (*str)
	{
		*temp = *str;
		temp++;
		str++;
	}
	*temp = '\0';
	return (duplicate);
}
