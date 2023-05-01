#include "lists.h"

/**
 * sum_listint - sums all the data in a list
 * @head: start of the list
 *
 * Return: sum of the data in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
