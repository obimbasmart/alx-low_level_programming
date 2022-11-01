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
	int diff;
	
	len = 0;
	if (!head)
	{
		return (len);
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		diff = head - head->next;
		len += 1;
		if (diff <= 0)
		{
			
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (len);
}
