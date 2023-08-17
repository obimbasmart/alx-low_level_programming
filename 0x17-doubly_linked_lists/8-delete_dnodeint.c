#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @index: position of node
 * @head: pointer to first element of LL
 *
 * Return: int : 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *_head_copy;
	size_t node_len;

	_head_copy = *head;
	node_len = 0;

	if (!(*head))
		return (-1);

	node_len = _get_n_nodes(*head);

	if (index >= node_len) /* invalid index */
		return (-1);

	_head_copy = *head;
	/* loop until index is 0 */
	while (index)
	{
		*head = (*head)->next;
		index--;
	}

	if ((*head)->prev)
		(*head)->prev->next = (*head)->next;
	else
		_head_copy = (*head)->next;

	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;

	/* loop until index is 0 */
	free(*head);
	*head = _head_copy;
	return (1);
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

