#ifndef lists_h
#define lists_h

#include <stddef.h>

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

size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
#endif /* end of lists_h */
