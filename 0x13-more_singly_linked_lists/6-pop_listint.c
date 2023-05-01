#include "lists.h"

/**
 * pop_listint - deletes the first node of a list
 * @head: double pointer to the first node
 *
 * Return: data of the first node or 0 if head is null
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if ((head == NULL) || (*head == NULL))
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
