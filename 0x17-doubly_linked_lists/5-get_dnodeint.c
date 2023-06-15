#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the given index
 * @head: pointer to first node
 * @index: position of index to find
 *
 * Return: node at the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (!head)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}

	return (NULL);
}
