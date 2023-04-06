#include "main.h"
int square_root(int a, int t);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to determine its squareroot
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, 0));
	}
}

/**
 * square_root - helper function to test squareroot of n above
 * @a: number to test its root
 * @t: the integer root to test
 *
 * Return: the root or -1 if no integer rooot
 */

int square_root(int a, int t)
{
	if (t * t == a)
	{
		return (t);
	}
	else if (t * t > a)
	{
		return (-1);
	}
	else
	{
		return (square_root(a, t + 1));
	}
}
