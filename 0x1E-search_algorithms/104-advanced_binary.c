#include "search_algos.h"

/**
 * binary_recurse - recursion for binary search
 * @array: array to search
 * @low: the smallest index
 * @high: the largest index
 * @value: integer to search
 *
 * Return: index position of the first integer found
 */

int binary_recurse(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}

	printf("\n");

	if (array[mid] == value)
	{
		if (mid == low || (array[mid - 1] != value))
			return (mid);
		else
			return (binary_recurse(array, low, mid, value));
	}
	else if (array[mid] > value)
		return (binary_recurse(array, low, mid - 1, value));
	else
		return (binary_recurse(array, mid + 1, high, value));
}

/**
 * advanced_binary - searching integer using binary search
 * @array: array to search
 * @size: size of the array
 * @value: integer to search
 *
 * Return: index where value is located or -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recurse(array, 0, size - 1, value));
}
