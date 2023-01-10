#include "hash_tables.h"

/**
 * hash_table_set - add an element to a hash table
 * @key: key
 * @value: value for key
 * @ht: pointer to hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node;
	unsigned long int index;

	/* key cannot be empty */
	if (key[0] == '\0')
		return (EXIT_FAILURE);

	/* create new element */
	new_hash_node = malloc(sizeof(hash_node_t));
	/*if malloc fails */
	if (!new_hash_node)
		return (EXIT_FAILURE);

	new_hash_node->key = (char *) key;
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;

	/* get index */
	index = key_index((unsigned char *)key, ht->size);
	/* check for collision */
	if (is_collision(ht, index))
	{
		/* add to the begening of list */
		new_hash_node->next = ht->array[index];
		ht->array[index] = new_hash_node;
		return (EXIT_SUCCESS);
	}

	ht->array[index] = new_hash_node;
	return (EXIT_SUCCESS);
}

/**
 * is_collision - function checks if a key collides with another
 * in a hash table
 * @ht: pointer to hash table
 * @key: key to check
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int is_collision(hash_table_t *ht, unsigned long int index)
{
	if (ht->array[index])
		return (EXIT_SUCCESS);

	return (EXIT_FAILURE);
}
