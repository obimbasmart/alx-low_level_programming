#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head node of dlistint_t list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (!head)
	{
		return;
	}

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

	free(head);
	head = NULL;
}
