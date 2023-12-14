#include "search_algos.h"
#include <math.h>

/**
 * jump_list - search for value in an singly linked list
 * @list: singly linked list of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - pointer to first node, if value is found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev_node, *node = list;
	size_t prev, step = sqrt(size);

	if (!list)
		return (NULL);

	prev_node = list;
	node = step_node(list, step);
	prev = 0;

	while (node->next && node->n < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, node->n);
		prev = step;
		prev_node = node;
		node = step_node(node, sqrt(size));
	}

	if (prev == 0)
		printf("Value checked array[%ld] = [%d]\n", step, node->n);
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while (prev_node)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev, prev_node->n);
		if (prev_node->n == value)
			return (prev_node);
		prev_node = prev_node->next;
		prev++;
	}

	return (NULL);
}

/**
 * step_node - move node @n steps ahead
 * @node: pointer to pointer to node
 * @n: number of steps
 * @size: size of linked list
 * Return: nothing
 */
listint_t *step_node(listint_t *node, size_t n)
{
	listint_t *current = node;

	while (n-- && current->next)
		current = current->next;
	return (current);
}

/**
 * print_list - Prints the content of a listint_t
 *
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}

