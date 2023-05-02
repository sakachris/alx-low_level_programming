#include "lists.h"

/**
 * find_listint_loop - finds a loop in linked list
 * @head: pointer to first node
 *
 * Return: address of first node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (head);
		}
	}

	return (NULL);
}
