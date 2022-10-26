#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function frees a LL from mememory
 * @head: head to LL
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}

