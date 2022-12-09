#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: head node of dlistint_t list
 * @index: index of node starting from 0
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	size_t n_node, counter;

	n_node = counter = 0;
	ptr = head;

	/* get the length of the node */
	while (ptr)
	{
		ptr = ptr->next;
		n_node++;
	}

	if (index >= n_node)
		return (NULL);

	while (counter < index)
	{
		head = head->next;
		counter++;
	}

	return (head);
}
