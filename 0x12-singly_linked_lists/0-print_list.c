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
	size_t n_nodes;

	n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		/* if node's str is NULL, then 0 is the length and print (nil) */
		printf("[%d] %s\n", !h ? 0 : h->len, !h->str ? "(nil)" : h->str);
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
