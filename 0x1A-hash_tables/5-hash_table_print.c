#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned int is_first_item;
	hash_node_t *item;

	/* if hash table is NULL */
	if (!ht)
		return;

	is_first_item = TRUE;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];
		while (item)
		{
			if (is_first_item)
				printf("'%s': '%s'", item->key, item->value);
			else
				printf(", '%s': '%s'", item->key, item->value);

			item = item->next;
			is_first_item = FALSE;
		}
	}
	printf("}\n");
}
