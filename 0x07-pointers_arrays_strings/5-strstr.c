#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: substring to searh in haystack
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i] != needle[0] && haystack[i] != '\0')
			i++;
		if (haystack[i] == '\0')
			return ('\0');

		while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack);
		if (haystack[i] == '\0')
			return ('\0');
	}
}
