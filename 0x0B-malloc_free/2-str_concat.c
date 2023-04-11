#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory which
 * contains the contents of s1, followed by the
 * contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int s1_size = strlen(s1);
	int s2_size = strlen(s2);
	int new_size = s1_size + s2_size + 1;
	char *cat;
	int i;

	cat = malloc(sizeof(char) * new_size);

	if (!cat)
	{
		return (NULL);
	}

	for (i = 0; i < s1_size; i++)
	{
		cat[i] = s1[i];
	}
	for (i = 0; i < s2_size; i++)
	{
		cat[s1_size + i] = s2[i];
	}
	cat[new_size - 1] = '\0';

	return (cat);
}
