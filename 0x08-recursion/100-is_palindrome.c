#include "main.h"
int _strlen(char *str);
int palindrome(char *string, int left, int right);

/**
 * is_palindrome - checks for a palindrome string
 * @s: the string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	if (length == 0 || length == 1)
	{
		return (1);
	}
	else
	{
		return (palindrome(s, 0, length - 1));
	}
}

/**
 * _strlen - finds length of a string
 * @str: string to determine length
 *
 * Return: lenght of string
 */

int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}

/**
 * palindrome - helper function to identify palindome
 * @string: the string to check
 * @left: index of string from start of string
 * @right: index of string from end of string
 *
 * Return: 1 if palindrome and 0 otherwise
 */

int palindrome(char *string, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else
	{
		if (string[left] == string[right])
		{
			return (palindrome(string, left + 1, right - 1));
		}
		else
		{
			return (0);
		}
	}
}
