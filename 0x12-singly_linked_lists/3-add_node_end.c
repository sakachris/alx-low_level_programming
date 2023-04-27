#include "lists.h"

/**
 * _strlen - finds the size of a string
 * @str: string to find its size
 *
 * Return: size of the string
 */

int _strlen(const char *str)
{
	int count = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		count++;
		str++;
	}

	return (count);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the first node
 * @str: data of the first node
 *
 * Return: address of the added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *temp;

	add = malloc(sizeof(list_t));
	if (!add)
	{
		return (NULL);
	}
	else
	{
		add->str = strdup(str);
		add->len = _strlen(str);

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
