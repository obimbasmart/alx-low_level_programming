#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: the index of the new node
 * @n: data for the new node
 * @h: head node of the LL
 *
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new_node;
	size_t node_len;

	node_len = dlistint_len(*h);
	ptr = *h;
	if (idx > node_len)
		return (NULL);

	/* if insertion is for the begening of the node */
	if (!(*h) || idx == 0)
		return (add_dnodeint(h, n));

	/* if insertion is at the end of the node */
	if (idx == node_len)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed to allocate memory");
		return (NULL);
	}

	while (idx)
	{
		ptr = ptr->next;
		idx--;
	}
	new_node->n = n;
	new_node->next = ptr;
	ptr->prev->next = new_node;
	new_node->prev = ptr->prev;
	ptr->prev = new_node;

	return (new_node);
}


/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head node of DLL
 *
 * Return: number of element in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
