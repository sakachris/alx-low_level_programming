#include "search_algos.h"

/**
 * interpolation_search - searches an integer using interpolation algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: integer to search
 *
 * Return: first index where value is located or -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	while (low <= high && value <= array[high] && value >= array[low])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	if (value == array[low])
		return (low);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

	if (pos > (size - 1) || (int)pos < array[0])
		printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
