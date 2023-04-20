#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @args: number of arguments
 * @argv: arguments passed
 *
 * Return: 0 if success
 */

int main(int args, char *argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int result = 0;

	if (args != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2] == '/' && b == 0) || (argv[2] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (argv[2] != '+' && argv[2] != '-' && argv[2] != '/' && argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);

	return (0);
}
