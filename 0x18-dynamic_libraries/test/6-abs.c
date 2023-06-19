#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: the integer to convert to absolute
 *
 *Return: an absolute value
 */

int _abs(int i)
{

	if (i < 0)
	{
		i = (-1) * i;
		return (i);
	}
	else
	{
		return (i);
	}
}
