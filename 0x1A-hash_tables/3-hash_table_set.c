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
	hash_node_t *new_hash_node, *current_hash_node;
	unsigned long int index;

	/* key cannot be empty and hash table cannot be NULL */
	if (key[0] == '\0' || !ht)
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
	/* get current node */
	current_hash_node = ht->array[index];
	/* check if index is empty/NULL */
	if (!current_hash_node)
		ht->array[index] = new_hash_node; /* add item directory*/

	/* if index is already occupied */
	else
	{
		/* check if key is same as the current item */
		if (strcmp(current_hash_node->key, key) == 0)
			strcpy(ht->array[index]->value, value);	/* update the value */
		/* for collision */
		else
			handle_collision(&ht, new_hash_node, index);
	}
	return (EXIT_SUCCESS);
}

/**
 * handle_collision - function checks if a key collides with another
 * in a hash table
 * @ht: pointer to hash table
 * @index: collision index
 * @new_node: new node item to be added to the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
void handle_collision(hash_table_t **ht, hash_node_t *new_node,
						unsigned long int index)
{
	new_node->next = (*ht)->array[index];
	(*ht)->array[index] = new_node;
}

