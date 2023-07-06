#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function frees a LinkedList from mememory
 * @head: head to LL
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	current_node = *head;
	if (!head)
		return;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}

