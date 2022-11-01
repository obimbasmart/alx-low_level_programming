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
	long int diff;

	len = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		len++;
		diff = head - head->next;

		if (diff < 0)
		{
			head = head->next;
		}
		else
		{

			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		/* head = head->next; */
	}
	return (len);
}
