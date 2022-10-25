#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int n_nodes;

	n_nodes = 0;


	if (h == NULL)
	{
		return (0);
	}

	do {
		n_nodes++;
		h = h->next;
	} while (h != NULL);

	return (n_nodes);
}
