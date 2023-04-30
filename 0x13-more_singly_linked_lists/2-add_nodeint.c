#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to the start of the list
 * @n: the element to be added
 *
 * Return: address of the added element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
	{
		return (NULL);
	}
	else
	{
		add->n = n;
		if (*head != NULL)
		{
			add->next = *head;
		}
		*head = add;
	}

	return (*head);
}
