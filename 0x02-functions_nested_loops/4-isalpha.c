#include "main.h"
/**
 * _isalpha - tests for alphabets
 * @c: the letter to be tested
 *
 * Return: 1 if c is alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
