#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its arguments
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ags;

	if (n == 0)
	{
		return (0);
	}

	va_start(ags, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ags, unsigned int);
	}

	va_end(ags);

	return (sum);
}
