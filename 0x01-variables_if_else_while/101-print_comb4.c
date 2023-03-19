#include <stdio.h>
/* printing numbers three digit number */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int n, n2, n3;

	for (n = 0; n < 10; n++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			for (n3 = 0; n3 < 10; n3++)
			{
				if (n != n2 && n != n3 && n2 != n3 && n < n2 && n2 < n3)
				{
					putchar((n % 10) + '0');
					putchar((n2 % 10) + '0');
					putchar((n3 % 10) + '0');

					if (n <= 6 && n2 <= 8)
					{
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
