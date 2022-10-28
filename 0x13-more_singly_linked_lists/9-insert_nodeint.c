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

	back_node = *head;
	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
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
