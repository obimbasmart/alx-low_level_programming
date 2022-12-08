#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - that prints a doubly linked list (DLL)
 * @h: head node of DLL
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes;

	if (!h)
		return (0);

	n_nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
