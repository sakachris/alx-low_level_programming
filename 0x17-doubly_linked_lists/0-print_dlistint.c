#include "lists.h"

/**
 * print_dlistint - print elements of a list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
