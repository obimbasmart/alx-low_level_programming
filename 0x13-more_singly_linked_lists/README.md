# C - More singly linked lists

## More Info
Please use this data structure for this project:

```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
## Mandatory

0. Write a function that prints all the elements of a `listint_t` list.

	- Prototype: `size_t print_listint(const listint_t *h);`
	- Return: the number of nodes
	- Format: see example
	- You are allowed to use `printf`

1. Write a function that returns the number of elements in a linked `listint_t` list.

	- Prototype: `size_t listint_len(const listint_t *h);`
