#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @str: string
 * Return: integer
 */
int _strlen_recursion(char *str)
{
	if (!*str)
		return (0);
	return (1 + _strlen_recursion(&str[1]));
}
