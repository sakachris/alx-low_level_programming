#include "lists.h"

/**
 * listint_len - determines length of the node
 * @h: first node
 *
 * Return: size of the list
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

/**
 * delete_nodeint_at_index - delete node at given position
 * @head: pointer to first node
 * @index: position of node to delete
 *
 * Return: 1 if success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int size = listint_len(*head);
	unsigned int i;

	if ((head == NULL) || (*head == NULL))
	{
		return (-1);
	}

	if (index > size)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	temp2 = temp->next;
	if (index == (size - 1))
	{
		temp->next = NULL;
		free(temp2);
		return (1);
	}
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
