#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 *
 * Return: integer converted from s
 */

int _atoi(char *s)
{
	int i = 0;
	int size = 0;
	int result = 0;
	int neg_sign = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	for (; i < size; i++)
	{
		if (s[i] == '-')
		{
			neg_sign++;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			for (; s[i] >= '0' && s[i] <= '9'; i++)
			{
				result = result * 10 + (s[i] - '0');
			}
			break;
		}
	}

	if (neg_sign % 2 != 0)
	{
		return (-result);
	}
	else
	{
		return (result);
	}
}
