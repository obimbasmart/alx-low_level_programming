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
	size_t counter, n_nodes;

	n_nodes = _listint_len(head);
	counter = 0;

	if (index >= n_nodes)
		return (NULL);

	while (counter < index)
	{
		head = head->next;
		counter++;
	}
	return (head);
}


/**
 * listint_len - return the number of elements in a linked listint_t
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t _listint_len(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	if (h == NULL)
		return (0);

	while (h)
	{
			n_nodes++;
			h = h->next;
	}
	return (n_nodes);

}
