#include <stdio.h>
/* printing alphabets excluding e and q */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	char c;

	/* putchar alphabets from a to z */
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
