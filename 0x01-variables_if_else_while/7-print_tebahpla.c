#include <stdio.h>
/* printing alphabets in lower case in reverse */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	char c;

	/* putchar alphabets from z to a */
	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');
	return (0);
}
