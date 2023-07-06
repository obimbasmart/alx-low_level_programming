#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end of a Linked list
 * @n: integer for new pointer
 * @head: the head of the linked list
 *
 * Return: pointer to the new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL)

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head)) /* empty list */
	{
		*head = new_node;
		return (new_node);
	}
	/* get the last node of the list */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
