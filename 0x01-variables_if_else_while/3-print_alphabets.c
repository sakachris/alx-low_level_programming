#include <stdio.h>
/* printing alphabets in lower and upper  case */

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
	putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c)
	putchar('\n');
	return (0);
}
