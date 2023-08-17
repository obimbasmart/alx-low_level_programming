#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a dlistint_t list.
 * @head: head node of dlistint_t list
 *
 * Return: int - 0 if empty dlistint
 */
int sum_dlistint(dlistint_t *head)
{
	int n_sum = 0;

	while (head)
	{
		n_sum += head->n;
		head = head->next;
	}

	return (n_sum);
}
