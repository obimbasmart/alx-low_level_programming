#include "hash_tables.h"

/**
 * key_index - returns index of a key using the hash_djb2 function
 * @size: size of array of hash table
 * @key: key
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
