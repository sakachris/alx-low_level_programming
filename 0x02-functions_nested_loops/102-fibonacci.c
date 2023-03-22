#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int n1 = 1, n2 = 2;
	int nn = n1 + n2;

	printf("%d, %d, ", n1, n2);

	for (i = 5; i <= 50; i++)
	{
		printf("%u, ", nn);
		n1 = n2;
		n2 = nn;
		nn = n1 + n2;
	}
	printf("\n");

	return (0);
}
