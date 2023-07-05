#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a node at the end of a Linked list
 * @str: the string for the new node
 * @head: the head of the linked list
 *
 * Return: pointer to the new node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* get the last node of the list */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
	return (new_node);
}
