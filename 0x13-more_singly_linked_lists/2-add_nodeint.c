#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at begening of list
 * @head: pointer to first element of LL
 * @n: data for new node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
