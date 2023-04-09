#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: arguments count
 * @argv: pointer to string arguments
 *
 * Return: 0 if success, 1 if converted string has non digits
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int num = strtol(argv[i], &p, 10);

			if (*p == '\0')
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
