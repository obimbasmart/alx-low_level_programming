
#include<stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free a LL; handle both cyclic LL
 * @h: pointer for first node
 *
 * Return: size of linked list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *junction, *temp;
	unsigned int list_len;

	list_len = 0;
	junction = (listint_t *) _find_junction(*h);

	/* if the Linked list has a loop */
	if (junction)
	{
		if (junction == *h)
		{
			list_len += free_cycle(h);
		}
		else
		{
			while (*h != junction)
			{
				temp = (*h)->next;
				free(*h);
				*h = NULL;
				list_len += 1;
				*h = temp;
			}
			list_len += free_cycle(&junction);
		}
	}

	else
	{
		list_len += _free_listint2(h);
	}
	*h = NULL;
	return (list_len);
}


/**
 * free_cycle - free a cyclic linked list
 * @junction: where to start and stop
 *
 * Return: lenght of linked list
 */
size_t free_cycle(listint_t **junction)
{
	unsigned int cycle_len;
	listint_t *traverse, *temp;

	traverse = *junction;
	cycle_len = 0;

	do {
		temp = traverse->next;
		free(traverse);
		traverse = NULL;
		cycle_len += 1;
		traverse = temp;
	} while (traverse != *junction);
	*junction = NULL;
	return (cycle_len);
}


/**
 * _find_junction - find the junction node of a cyclic LL
 * @head: pointer to first node
 *
 * Return: the junction node
 */
listint_t *_find_junction(const listint_t *head)
{
	listint_t *fastptr, *slowptr;

	slowptr = fastptr = (listint_t *) head;
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
			slowptr = (listint_t *)head;
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
 * _free_listint2 - function frees a linear LL from mememory
 * @head: head to LL
 *
 * Return: int : size of linked list
 */
size_t _free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return (0);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	return (1 + _free_listint2(&(*head)->next));
	free(*head);
	*head = NULL;

}

