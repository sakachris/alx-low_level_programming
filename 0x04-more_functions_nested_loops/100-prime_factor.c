#include <stdio.h>
/**
 * large_prime_factor - prints the largest prime factor of a number
 * @n: the number to determine largest prime number
 *
 */

void large_prime_factor(long int n)
{
	long int i = 2;

	for (; i < n; i++)
	{
		if (n % i == 0)
			n = n / i;
	}
	printf("%li\n", n);
}

/**
 * main - Entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	long int n = 612852475143;

	large_prime_factor(n);

	return (0);
}
