#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print all element of dlistinr_t list
 *
 * @h: pointer to the head of tthe list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 1;

	while (h->next != NULL)
	{
		nodes += 1;
		h = h->next;
	}

	return (nodes);
}
