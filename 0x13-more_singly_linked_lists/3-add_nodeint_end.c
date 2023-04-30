#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: double pointer to the first node
 * @n: element to be added
 *
 * Return: address of the added element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *temp;

	add = malloc(sizeof(listint_t));
	if (!add)
	{
		return (NULL);
	}
	else
	{
		add->n = n;
		if (*head == NULL)
		{
			add->next = NULL;
			*head = add;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = add;
			add->next = NULL;
		}
	}

	return (*head);
}
