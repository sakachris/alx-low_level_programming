#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers,
 * followed by a new line
 * @n: number of elements in array
 * @a: array pointer
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
