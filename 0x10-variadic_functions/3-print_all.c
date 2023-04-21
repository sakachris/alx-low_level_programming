#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * length - determines length of string
 * @str: string to determine length
 *
 * Return: length of string
 */

int length(const char *str)
{
	int count = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * print_all - prints anything
 * @format: data type format
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int n = length(format);
	char *s;
	va_list print;

	va_start(print, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				break;
			case 'i':
				printf("%d", va_arg(print, int));
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				break;
			case 's':
				s = va_arg(print, char *);

				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	va_end(print);
	printf("\n");
}
