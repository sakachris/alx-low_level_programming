#include "search_algos.h"

/**
 * binary_search - searches using binary search algorithm
 * @array: array of integers to search
 * @low: first value in array block
 * @high: last value in array block
 * @value: vaue to be searched
 *
 * Return: index where value is located or -1 otherwise
 */

int binary_searching(int *array, size_t low, size_t high, int value)
{
	int left = low;
	int right = high;
	int mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches integer in array using exponential algo
 * @array: array to search
 * @size: size of the array
 * @value: integer to search
 *
 * Return: first index where value is located or -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t b = 1, low, high;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (b < size && array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		b *= 2;
	}

	low = b / 2;
	if (b < size - 1)
		high = b;
	else
		high = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_searching(array, low, high, value));
}
