#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(*arr) * size);
	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
