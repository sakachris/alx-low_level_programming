#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees malloc memory of a struct
 * @d: struct to be freed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
