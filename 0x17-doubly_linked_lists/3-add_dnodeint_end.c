#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: head node of dlistint_t list
 * @n: data for new node
 *
 * Return: address if returned element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	last_node = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		dprintf(STDERR_FILENO, "Error: malloc can't allocate memory");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head)) /* empty list */
	{
		*head = new_node;
		return (*head);
	}

	while (last_node->next)
		last_node = last_node->next;


	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
