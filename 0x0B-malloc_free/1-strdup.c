#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: original string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int size, idx;

	size = strlen(str);
	dup_str = malloc(sizeof(char) * size + 1);

	if (!str)
		return (NULL);

	idx = 0;
	while (str[idx] != '\0')
	{
		dup_str[idx] = str[idx];
		idx++;
	}
	dup_str[idx] = '\0';
	return (dup_str);
}


