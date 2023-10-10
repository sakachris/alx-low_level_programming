#include "search_algos.h"

/**
 * binary_search - searches using binary search algorithm
 * @array: array of integers to search
 * @size: size of the array
 * @value: vaue to be searched
 *
 * Return: index where value is located or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
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
