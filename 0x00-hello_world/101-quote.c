#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 if success
 */
int main(void)
{
	/* 2 is for standard error device */
	/* 59 is the total number of characters */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
