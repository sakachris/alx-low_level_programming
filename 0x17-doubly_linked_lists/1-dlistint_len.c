#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
