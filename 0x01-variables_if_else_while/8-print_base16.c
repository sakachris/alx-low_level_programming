#include <stdio.h>
/* printing numbers and alphabets in lower  case */

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;
	char c;

	/* putchar numbers from 0 to 9 */
	for (i = 0; i < 10; i++)
	putchar(i % 10 + '0');
	/* putchar alphabets from a to z */
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
