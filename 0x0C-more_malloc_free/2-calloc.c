#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array using malloc
 * @nmemb: number of elements of array
 * @size: size of each element of array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);
	if (!mem)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		mem[i] = 0;
	}

	return (mem);
}
