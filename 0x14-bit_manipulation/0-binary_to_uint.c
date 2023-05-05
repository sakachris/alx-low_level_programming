#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: unsigned integer or 0 if not success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int rem, dec = 0;

	unsigned long int num = 0;

	int k, i = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (k = 0; b[k] != '\0'; k++)
	{
		if ((b[k] - 48) != 0 && (b[k] - 48) != 1)
		{
			return (0);
		}
		num = num * 10 + (b[k] - 48);
	}

	while (num != 0)
	{
		rem = num % 10;
		dec += rem << i;
		num /= 10;
		i++;
	}

	return (dec);
}


