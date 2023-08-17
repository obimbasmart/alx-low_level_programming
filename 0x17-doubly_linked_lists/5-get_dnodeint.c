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
	size_t n_node, counter;

	counter = 0;
	n_node = _get_n_nodes(head);

	if (index >= n_node) /* invalid index */
		return (NULL);

	while (counter < index)
	{
		head = head->next;
		counter++;
	}

	return (head);
}


/**
* _get_n_nodes - return the number of nodes in a doubly LL
* @head: head of doubly linked list (LL)
*
* Return: number of nodes, NULL if failed
*/
size_t _get_n_nodes(dlistint_t *head)
{
	size_t n_nodes = 0;
	dlistint_t *ptr = head;

	if (!head)
		return (0);

	while (ptr)
	{
		ptr = ptr->next;
		n_nodes++;
	}
	return (n_nodes);
}

