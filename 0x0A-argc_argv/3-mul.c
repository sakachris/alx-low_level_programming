#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments passed to it
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * Return: 0 if success, 1 if less than two arguments passed
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc > 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
