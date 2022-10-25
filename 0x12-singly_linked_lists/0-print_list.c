#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
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
			printf("[%d] %s\n", h->str == NULL ? 0 :
				h->len, h->str == NULL ? "(nil)" : h->str);
			n_nodes++;
			h = h->next;
		} while (h != NULL);
	}
	return (n_nodes);
}
