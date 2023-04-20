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
	int in;
	char c;
	float f;
	char *s;
	int n = length(format);
	va_list print;

	va_start(print, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(print, int);

				printf("%c", c);
				break;
			case 'i':
				in = va_arg(print, int);

				printf("%d", in);
				break;
			case 'f':
				f = va_arg(print, double);

				printf("%f", f);
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
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	va_end(print);
	printf("\n");
}
