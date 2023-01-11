#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *item, *next_item;

	/* if hash table is NULL */
	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];

		while (item)
		{
			next_item = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = next_item;
		}
	}
	free(ht->array);
	free(ht);
}
