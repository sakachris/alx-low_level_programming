#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first node of the list
 *
 * Return: address of the first node after reversal
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;

	return (*head);
}
