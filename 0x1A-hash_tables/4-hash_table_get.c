#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to retrieve
 *
 * Return: value(string) associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_node;

	/* if hash table is empty */
	if (!ht)
		return (NULL);

	/* get index for key */
	index = key_index((unsigned char *)key, ht->size);

	/* if index is empty, key can't be found */
	if (ht->array[index] == NULL)
		return (NULL);

	hash_node = ht->array[index];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);

		hash_node = hash_node->next;
	}

	/* key wasn't found */
	return (NULL);
}
