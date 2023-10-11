#include "search_algos.h"

/**
 * jump_search - searches for a value using jump search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: integer to be searched
 *
 * Return: first index where value is located or -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	int s = size, step, next, prev = 0;

	if (!array)
		return (-1);

	step = sqrt(s);

	while (prev < s)
	{
		if (array[prev] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	next = prev - step;
	printf("Value found between indexes [%d] and [%d]\n", next, prev);
	if (prev >= s)
		prev = s - 1;

	while (next <= prev)
	{
		printf("Value checked array[%d] = [%d]\n", next, array[next]);
		if (array[next] == value)
			return (next);
		next++;
	}
	return (-1);
}
