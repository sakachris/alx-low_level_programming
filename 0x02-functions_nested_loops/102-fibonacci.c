#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;
	long unsigned int n1 = 1, n2 = 2;
	long unsigned int nn = n1 + n2;

	printf("%lu, %lu, ", n1, n2);

	for (i = 5; i <= 52; i++)
	{
		printf("%lu, ", nn);
		n1 = n2;
		n2 = nn;
		nn = n1 + n2;
	}
	printf("\n");

	return (0);
}
