#include "main.h"
/**
 * _islower - tests for lower case
 * @c: the letter to be tested
 *
 * Return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
