#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes;

	n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
