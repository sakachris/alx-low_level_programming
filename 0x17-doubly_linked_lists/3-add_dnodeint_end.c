#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a linked list
 * @head: pointer to the first node
 * @n: data to be added
 *
 * Return: address of added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *temp;

	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);

	add->n = n;

	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = add;
		add->prev = temp;
	}

	return (*head);
}
