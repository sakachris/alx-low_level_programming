#include "main.h"
#include <stdlib.h>

/**
 * length - determines size of string
 * @str: string to determine size
 *
 * Return: length of string
 */

int length(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to concatenate
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size = length(s1);
	unsigned int new_size = s1_size + n + 1;
	char *ncat;
	unsigned int i;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	ncat = malloc(sizeof(*ncat) * new_size);
	if (!ncat)
	{
		return (NULL);
	}

	for (i = 0; i < s1_size; i++)
	{
		ncat[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ncat[s1_size + i] = s2[i];
	}
	ncat[new_size - 1] = '\0';

	return (ncat);
}
