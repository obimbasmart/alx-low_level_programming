#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of hash table
 *
 * Return: pointer to first element in hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t idx;
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	/* malloc fails */
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = calloc(new_hash_table->size, sizeof(hash_node_t *));

	/* initialize hash table element to NULL */
	for (idx = 0; idx < new_hash_table->size; idx++)
		new_hash_table->array[idx] = NULL;

	return (new_hash_table);
}
