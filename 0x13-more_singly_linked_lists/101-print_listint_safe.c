#include<stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - handle both cyclic LL
 * @head: pointer for first node
 *
 * Return: size of linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *junction;
	unsigned int list_len;

	list_len = 0;
	junction = find_junction(head);
	if (junction)
	{
		if (junction == head)
		{
			list_len += print_cycle(junction);
		}
		else
		{
			while (head != junction)
			{
				printf("[%p] %d\n", head, head->n);
				list_len += 1;
				head = head->next;
			}
			list_len += print_cycle(junction);
		}
	}

	else
	{
		print_listint(head);
	}
}

/**
 * find_junction - find the junction node of a cyclic LL
 * @head: pointer to first node
 *
 * Return: the junction node
 */
listint_t *find_junction(const listint_t *head)
{
	listint_t *fastptr, *slowptr;

	slowptr = fastptr = head;
	/* find the point where both fastptr and slowptr meet */
	while (fastptr && fastptr->next)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next;
		if (fastptr)
		{
			fastptr = fastptr->next;
		}
		if (fastptr == slowptr)
		{
			slowptr = head;
			while (fastptr != slowptr)
			{
				slowptr = slowptr->next;
				fastptr = fastptr->next;
			}
			return (fastptr);
		}
	}
	return (NULL);
}

/**
 * print_cycle - print a cyclic linked list
 * @junction: where to start and stop
 *
 * Return: lenght of linked list
 */
size_t print_cycle(listint_t *junction)
{
	int cycle_len;
	listint_t *traverse;

	traverse = junction;
	cycle_len = 0;

	do {
		printf("[%p] %d\n", traverse, traverse->n);
		cycle_len++;
		traverse = traverse->next;
	} while (traverse != junction);

	printf("\n");
	return (cycle_len);
}

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
			printf("[%p] %d\n", h, h->n);
			n_nodes++;
			h = h->next;
		} while (h != NULL);
	}
	return (n_nodes);
}


