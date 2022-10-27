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
	listint_t *front_node, *back_node, *new_node;

	front_node = get_nodeint_at_index(*head, idx);
	back_node = get_nodeint_at_index(*head, idx - 1);

	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = front_node;
	new_node->n = n;
	back_node->next = new_node;

	return (new_node);
}
