#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function frees a LL from mememory
 * @head: head to LL
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (!head) /*empty list */
		return;

	if (!(head->next)) /* one-element list */
	{
		free(head->str);
		free(head);
		return;
	}

	free(head->str);
	free_list(head->next);
	free(head);
}

