#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	int i = 3, sum = 0;

	for (; i < 1024; i += 3)
	{
		sum += i;
	}

	for (i = 5; i < 1024; i += 5)
	{
		if (i % 3 != 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
