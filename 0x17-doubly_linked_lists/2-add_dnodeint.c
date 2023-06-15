#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of a list
 * @head: pointer to the first node
 * @n: element to add
 *
 * Return: Address of the added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);

	add->n = n;

	if (*head != NULL)
	{
		add->next = *head;
		add->prev = NULL;
		(*head)->prev = add;
	}
	*head = add;

	return (*head);
}
