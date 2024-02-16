#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * delete_dnodeint_at_index - Delete a node of a doubly linked list at an index
 *
 * @head: double pointer to the list
 * @index: the index of node to be deleted
 *
 * Return: 1 if succeeded -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	size_t itr = 0;

	if (*head == NULL)
		return (-1);

	for (itr = 0; itr < index; itr++)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (-1);
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;

	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);

}
