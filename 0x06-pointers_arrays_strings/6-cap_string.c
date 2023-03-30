#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize words
 *
 * Return: pointer to string capitalized
 */

char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 'a' + 'A';
			else
			{
				for (c = 0; c <= 12; c++)
				{
					if (sep[c] == s[i - 1])
						s[i] = s[i] - 'a' + 'A';
				}
			}
		}
	}
	return (s);
}
