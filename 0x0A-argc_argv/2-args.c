#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: pointer to the string arguments passed
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
