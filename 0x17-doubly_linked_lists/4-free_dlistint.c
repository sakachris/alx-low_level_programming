#include "lists.h"

/**
 * free_dlistint - frees a malloc'ed linked list
 * @head: pointer to the first node
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
