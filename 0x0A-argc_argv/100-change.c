#include <stdio.h>
#include <stdlib.h>
void coin_change(int cents);

/**
 * main - entry point
 * @argc: arguments count
 * @argv: pinter to string arguments
 *
 * Return: 0 if success, 1 if more than 2 arguments passed
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cent = atoi(argv[1]);

		if (cent < 0)
		{
			printf("0\n");
		}
		else
		{
			coin_change(cent);
		}
	}
	return (0);
}

/**
 * coin_change - prints the minimum number of coins
 * to make change for an amount of money
 * @cents: the money to find its change
 *
 * Return: nothing
 */

void coin_change(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;
	int c = 0;

	while (cents)
	{
		if (coins[i] > cents)
		{
			i++;
		}
		else
		{
			cents = cents - coins[i];
			c++;
		}
	}
	printf("%d\n", c);
}
