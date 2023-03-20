#include <stdio.h>
/* printing combination of two two-digit numbers */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int num, num2;

	for (num = 0; num < 100; num++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num < num2)
			{
				putchar((num / 10) + '0');
				putchar((num % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num < 98)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
