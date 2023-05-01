#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the given index
 * @head: pointer to the start of the list
 * @index: position of node to return
 *
 * Return: value of the node selected
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	if (!head)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);

		}
		count++;
		temp = temp->next;
	}

	return (NULL);
}
