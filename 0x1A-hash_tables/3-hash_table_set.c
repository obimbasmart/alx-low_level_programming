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
		return (0);

	/* get index */
	index = key_index((unsigned char *)key, ht->size);

	/* get current node in that position*/
	current_hash_node = ht->array[index];

	/* check if index is empty/NULL */
	if (!current_hash_node)
	{
		/*add item directry */
		/*create a new node */
		new_hash_node = create_new_node(key, value);
		if (!new_hash_node)
			return (0);
		ht->array[index] = new_hash_node;
	}

	/* if index is already occupied */
	else
	{
		/* check if key is same as the current item */
		if (strcmp(current_hash_node->key, key) == 0)
		{
			/* update the value */
			free(current_hash_node->value);
			current_hash_node->value = strdup(value);
		}
		/* for collision */
		else
		{
			new_hash_node = create_new_node(key, value);
			handle_collision(&ht, new_hash_node, index);
		}
	}
	return (1);
}

/**
 * handle_collision - handle collision in hash table by adding new
 * node at the begening of the LinkedList
 *
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

/**
 * create_new_node - create a new hash table node
 * @key: key for new node
 * @value: value for key
 *
 * Return: new node element
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_hash_node;

	/* create new element */
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (NULL);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;

	return (new_hash_node);
}
