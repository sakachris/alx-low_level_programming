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
 * create_node - creates a struct node
 * @n: node's data
 *
 * Return: created node
 */

dlistint_t *create_node(int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->prev = NULL;
	add->n = n;
	add->next = NULL;

	return (add);
}

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to first node
 * @idx: position to insert node
 * @n: data to be added
 *
 * Return: address of new node or NULL if not added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *add, *temp, *temp2;
	unsigned int i, size = dlistint_len(*h);

	if (!h)
		return (NULL);
	add = create_node(n);
	if (idx > size)
		return (NULL);
	if (*h == NULL)
	{
		*h = add;
		return (add);
	}
	if (idx == 0)
	{
		add->next = *h;
		(*h)->prev = add;
		*h = add;
		return (add);
	}
	else
	{
		temp = *h;
		for (i = 0; i < idx - 1; i++)
			temp = temp->next;
		if (temp->next == NULL)
		{
			temp->next = add;
			add->prev = temp;
		}
		else
		{
			temp2 = temp->next;
			temp2->prev = add;
			temp->next = add;
			add->prev = temp;
			add->next = temp2;
		}
	}
	return (add);
}
