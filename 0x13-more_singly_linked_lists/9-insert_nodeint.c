#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @idx: the index of the new node
 * @n: data for the new node
 * @head: head node of the LL
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *back_node, *new_node;
	int node_len;

	node_len = listint_len(*head);
	back_node = *head;

	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx >= node_len)
	{
		return (NULL);
	}
	new_node->n = n;

	idx--;
	while (idx != 0)
	{
		back_node = back_node->next;
		idx--;
	}
	new_node->next = back_node->next;
	back_node->next = new_node;

	return (new_node);
}

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
