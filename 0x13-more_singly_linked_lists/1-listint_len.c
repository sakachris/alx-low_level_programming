#include "lists.h"

/**
 * listint_len - find the number of elements in a list
 * @h: pointer to the start of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
