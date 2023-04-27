#include "lists.h"

/**
 * list_len - finds the length of a list
 * @h: pointer to the start of the list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
