#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
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
			printf("%d\n", h->n);
			n_nodes++;
			h = h->next;
		} while (h != NULL);
	}
	return (n_nodes);
}
