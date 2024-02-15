#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of element in a linked list
 * @h: pointer to the head of tthe list
 *
 * Return:the number of element in the list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
