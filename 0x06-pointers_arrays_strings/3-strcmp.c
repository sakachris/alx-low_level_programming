#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference of s1 ans s2 or 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	if (s1[i] == s2[i])
		return (0);

	return (s1[i] - s2[i]);
}
