#include "main.h"
int prime_number(int i, int num);

/**
 * is_prime_number - tests for a prime number
 * @n: number to be tested
 *
 * Return: 1 if prime number and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(2, n));
	}
}

/**
 * prime_number - helper function to test for prime number
 * @i: integer to test for prime number
 * @num: number to be tested
 *
 * Return: 1 if prime number and 0 if not
 */

int prime_number(int i, int num)
{
	if (num == i)
	{
		return (1);
	}
	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime_number(i + 1, num));
		}
	}
}
