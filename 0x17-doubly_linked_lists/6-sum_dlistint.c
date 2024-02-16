#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - a function that sum all the data n of a doubly linked list
 *
 * @head: pointer to the list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
