#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head node of DLL
 *
 * Return: number of element in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes;

	if (!h)
		return (0);

	n_nodes = 0;
	while (h)
	{
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
