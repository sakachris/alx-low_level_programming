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
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = j;
		j++;
	}

	return (arr);
}
