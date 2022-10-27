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
	int counter;

	counter = 0;
	while (counter < index)
	{
		head = head->next;
		counter++;
	}
	return (head);
}
