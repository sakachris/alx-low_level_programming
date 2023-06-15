#include "lists.h"

/**
 * sum_dlistint - sums all data in a linked list
 * @head: pointer to first node
 *
 * Return: sum of all data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
