#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to first element of LL
 *
 * Return: pointer to first node of reversedd list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last_node = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	last_node = reverse_listint(&(*head)->next);

	(*head)->next->next = *head;
	(*head)->next = NULL;
	return (last_node);
}

