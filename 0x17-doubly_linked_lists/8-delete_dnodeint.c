#include "lists.h"

/**
 * dlistint_len - determines the length of linked list
 * @h: pointer to first node
 *
 * Return: size of the linked list
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

/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @head: pointer to first node
 * @index: position to insert node
 *
 * Return: 1 if deleted successfuy, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int size = dlistint_len(*head);
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index > size)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		/*(*head)->prev = NULL;*/
		return (1);
	}
	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	temp2 = temp->next;
	if (index == (size - 1))
	{
		temp->next = NULL;
		free(temp2);
		temp2 = NULL;
		return (1);
	}
	temp->next = temp2->next;
	temp2->next->prev = temp;
	free(temp2);
	temp2 = NULL;
	return (1);
}
