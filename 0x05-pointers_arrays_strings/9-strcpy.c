#include "main.h"
/**
 * _strcpy - copies a string
 * @src: source string pointer
 * @dest: destination pointer
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
