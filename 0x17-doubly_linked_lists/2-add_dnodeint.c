#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head node of dlistint_t list
 * @n: data for new node
 *
 * Return: number of element in dlistint_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		dprintf(STDERR_FILENO, "Error: malloc can't allocate memory");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head)) /* empty linked list */
	{
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
