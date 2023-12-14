#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{

	int n;
	size_t index;
	struct listint_s *next;

} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

listint_t *step_node(listint_t *node, size_t n);
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);
int binary_search_exp(int *array, size_t low, size_t size, int value);
void print_array(int *array, size_t lower_b, size_t upper_b);
int _advanced_binary(int *array, size_t low, size_t high, int value);
size_t min(int, int);

#endif /* SEARCH_ALGOS */
