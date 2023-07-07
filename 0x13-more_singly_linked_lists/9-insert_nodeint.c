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
	unsigned int node_len;

	node_len = _listint_len(*head);
	back_node = *head;

	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node || idx > node_len) /* malloc fails, invalid index */
		return (NULL);

	/* if insertion is for the begening of the node */
	if (idx == 0)
		return (add_nodeint(head, n));

	/* if insertion is at the end of the node */
	else if (idx == node_len)
		return (add_nodeint_end(head, n));

	idx--;
	while (idx != 0)
	{
		back_node = back_node->next;
		idx--;
	}
	new_node->n = n;
	new_node->next = back_node->next;
	back_node->next = new_node;

	return (new_node);
}

/**
 * _listint_len - return the number of elements in a linked listint_t
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t _listint_len(const listint_t *h)

{
	unsigned int n_nodes;

	n_nodes = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a list_t list
 * @head: pointer to first element of LL
 * @n: starting point of linked list
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
