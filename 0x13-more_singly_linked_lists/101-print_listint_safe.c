#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list
 * @head: pointer to first node in list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int len;
	int idx;
	listint_t *temp_head, *temp_cons_head;

	temp_head = temp_cons_head = (listint_t *) head;
	len = 0;

	if (head == NULL)
	{
		return (0);
	}


	while (head)
	{
		len++;
		idx = len;

		while (idx-- && head->next)
		{
			if (temp_head == head->next)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				return (len);
			}
			temp_head = temp_head->next;
		}

		temp_head = temp_cons_head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (len);
}
