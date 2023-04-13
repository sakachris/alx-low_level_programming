#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes from memory to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to initial memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;

	if (!ptr)
	{
		new_mem = malloc(new_size);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_mem = malloc(new_size);
	if (!new_mem)
	{
		return (NULL);
	}
	else
	{
		_memcpy(new_mem, ptr, old_size);
		free(ptr);
	}

	return (new_mem);
}

