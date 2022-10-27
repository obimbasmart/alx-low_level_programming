#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t LL
 * @head: head node/first node
 * @index: the index of the index node starting at 0
 *
 * Return: nth_nod of listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter, n_nodes;

	n_nodes = listint_len(head);
	counter = 0;

	if (index >= n_nodes)
	{
		return (NULL);
	}

	while (counter < index)
	{
		head = head->next;
		counter++;
	}
	return (head);
}
