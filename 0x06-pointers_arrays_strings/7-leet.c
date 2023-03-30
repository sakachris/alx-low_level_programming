#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	char from[] = "aAeEoOtTlL";
	char to[] = "4433007711";
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; c < 10; c++)
		{
			if (s[i] == from[c])
				s[i] = to[c];
		}
	}
	return (s);
}
