#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of elements in a linked listint_t
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n_nodes;

	n_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	else
	{
		do {
			n_nodes++;
			h = h->next;
		} while (h != NULL);
	}
	return (n_nodes);
}
