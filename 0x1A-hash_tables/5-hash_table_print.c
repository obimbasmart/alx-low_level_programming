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
	unsigned int found_first_element;
	hash_node_t *item;

	/* if hash table is NULL */
	if (!ht)
		return;

	found_first_element = 1;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];
		while (item)
		{
			if (found_first_element)
				printf("'%s': '%s'", item->key, item->value);
			else
				printf(", '%s': '%s'", item->key, item->value);

			item = item->next;
			found_first_element = 0;
		}
	}
	printf("}\n");
}
