#include <stdio.h>
/* printing numbers 00 to 89 */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	/* putchar numbers 00 to 89 */
	for (i = 1; i <= 89; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
