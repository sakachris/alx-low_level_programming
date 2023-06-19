#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the destination object
 * @b: value o be filled
 * @n: number of bytes to be filled starting from s to be filled
 *
 * Return: filled char s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
