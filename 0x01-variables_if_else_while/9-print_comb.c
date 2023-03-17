#include <stdio.h>
/* printing numbers 0 to 9 */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	/* putchar numbers 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');
		if (i < 9)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
