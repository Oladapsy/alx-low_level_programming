#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get a doubly linked list node at a paticular index
 *
 * @head: a direct pointer to the doubly linked list
 *
 * @index: the index at which you want to retrieve the node
 *
 * Return: pointer to the node or NULL if it dosent exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
