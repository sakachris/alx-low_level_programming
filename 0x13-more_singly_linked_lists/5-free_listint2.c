#include "lists.h"

/**
 * free_listint2 - frees malloc'ed list
 * @head: pointer to first node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	if (head == NULL)
	{
		return;
	}
	head = NULL;
}
