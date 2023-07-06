#ifndef lists_h
#define lists_h

/* builtins */
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - singlylinkd list
 * @n: integer
 * @next: pointer to nextnode
 *
 * Description; singl liked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int pop_listint(listint_t **head);
void free_listint(listint_t *head);

listint_t *add_nodeint_end(listint_t **head, const int n);
listint_t *add_nodeint(listint_t **head, const int n);

size_t _listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
void free_listint2(listint_t **head);

int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

int delete_last_node(listint_t **);
int delete_nodeint_at_index(listint_t **head, unsigned int index);

listint_t *reverse_listint(listint_t **head);
listint_t *find_junction(const listint_t *head);
size_t print_cycle(listint_t *junction);
size_t print_listint_safe(const listint_t *head);

size_t free_listint_safe(listint_t **h);
size_t free_cycle(listint_t **junction);
listint_t *_find_junction(const listint_t *head);

size_t _free_listint2(listint_t **head);
#endif /* end of lists_h */
