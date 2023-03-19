#include <stdio.h>
/* printing combination of two two-digit numbers */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int n, n2, n3, n4;

	for (n = 0; n < 10; n++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			for (n3 = 0; n3 < 10; n3++)
			{
				for (n4 = 0; n4 < 10; n4++)
				{
					if (n <= n3 && n2 < n4)
					{
						putchar((n % 10) + '0');
						putchar((n2 % 10) + '0');
						putchar(' ');
						putchar((n3 % 10) + '0');
						putchar((n4 % 10) + '0');

						putchar(',');
						putchar(' ');

					}

				}

			}

		}
	}
	putchar('\n');
	return (0);
}
