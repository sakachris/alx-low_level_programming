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
 * insert_nodeint_at_index - insert node at given position
 * @head: pointer to first node
 * @idx: position to insert node
 * @n: data to be added
 *
 * Return: address of added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add, *temp;
	unsigned int size = listint_len(*head);
	unsigned int i;

	if ((head == NULL) || (*head == NULL))
	{
		return (NULL);
	}

	add = malloc(sizeof(listint_t));
	if (!add)
	{
		return (NULL);
	}

	if (idx > size)
	{
		return (NULL);
	}
	add->n = n;
	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}
	else
	{
		temp = *head;
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
		}
		add->next = temp->next;
		temp->next = add;
	}
	return (add);
}
