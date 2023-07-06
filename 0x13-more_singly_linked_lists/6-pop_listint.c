#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: the head node
 *
 * Return: the head node's data(0): integer
 */
int pop_listint(listint_t **head)
{

	int head_node_data;
	listint_t *next_node;

	/* if LL is empty return 0 */
	if (*head == NULL)
		return (0);

	/* save the head node's data and next node */
	head_node_data = (*head)->n;
	next_node = (*head)->next;

	/* free the head node */
	free(*head);
	/* update head */
	*head = next_node;

	return (head_node_data);
}


