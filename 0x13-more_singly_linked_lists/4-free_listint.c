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
	listint_t *current_node, *next_node;

	current_node = head;
	if (!head)
		return;

	while (current_node) /* not empty list or last node */
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}

