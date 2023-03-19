#include <stdio.h>
/* printing numbers 00 to 89 */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int num, num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num != num2 && num < num2)
			{
				putchar((num % 10) + '0');
				putchar((num2 % 10) + '0');

				if (num <= 7 && num2 <= 9)
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
