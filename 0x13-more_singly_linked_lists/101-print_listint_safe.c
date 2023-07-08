#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list
 * @head: pointer to first node in list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int len;
	int idx;
	listint_t *temp_head; /* a temporary pointer to the head node
				* used to know when another node points to it.
				* This signifies there's a loop
				*/
	listint_t *temp_cons_head; /* a temporary variable used to refer to the
					* initial head node in case we lost reference to it
					*/
	temp_head = temp_cons_head = (listint_t *) head;
	len = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		len++;
		idx = len;

		while (idx-- && head->next)
		{
			if (temp_head == head->next) /* if node points any previously
							* traversed node, then there's a loop
							*/
			{
				printf("[%p] %d\n", (void *)head, head->n);
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				return (len);
			}
			temp_head = temp_head->next; /* this line is increamented to ensure
							* all previously traveresed nodes are
							* checked for loop
							*/
		}
		temp_head = temp_cons_head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (len);
}
