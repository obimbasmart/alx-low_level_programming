#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n)
 * of a linked list
 * @head: head node of linked list
 *
 * Return: int : sum of data n
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	sum += head->n;
	return (sum);
}
