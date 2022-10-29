#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node in a LL
 * @index: position of node
 * @head: pointer to first element of LL
 *
 * Return: int : 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t  *next_node;
	unsigned int node_len;

	node_len = listint_len(*head);
	/* check whether position is valid */
	if (index >= node_len)
	{
		return (-1);
	}
	else
	{
		index++;
		/* loop until index is 0 */
		while (index--)
		{
			if (index == 0)
			{
				/* get the next_node */
				next_node = (*head)->next;
				/* free the current node */
				free(*head);
				/* update current pointer to next_node */
				*head = next_node;
			}
			else
			{
				/* assign current pointer to next_pointer */
				head = &(*head)->next;
			}
		}
	}
	return (1);
}


/**
 * listint_len - return the number of elements in a linked listint_t
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n_nodes;

	n_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	else
	{
		do {
			n_nodes++;
			h = h->next;
		} while (h != NULL);
	}
	return (n_nodes);
}

