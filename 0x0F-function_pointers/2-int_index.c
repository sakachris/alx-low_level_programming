#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array containing integers
 * @size: size of array
 * @cmp: function pointer to compare values
 *
 * Return: index of first matching number or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
