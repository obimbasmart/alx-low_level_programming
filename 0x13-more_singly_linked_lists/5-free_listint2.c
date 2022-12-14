#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function frees a LL from mememory
 * @head: head to LL
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;


}

