#include "main.h"
#include <string.h>
/**
 * is_palindrome - check if a string is palindrome
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	char first_char, last_char; /* 1st and last chars of s */
	int len, start_idx; /* length of the string  and first index*/

	start_idx = 0;
	if (strlen(s) <= 1)
		return (1);
	len = strlen(s);
	first_char = s[start_idx];
	last_char = s[len - start_idx - 1];
	return ((first_char == last_char) && _is_palindrome(s, start_idx + 1));
}

/**
 * _is_palindrome - check if string is palindrome recursively
 * @str: original string
 * @idx: first index
 * Return: int
 */
int _is_palindrome(char *str, int idx)
{
	char first_char;
	char last_char;
	int len;

	len = strlen(str);
	if (len - idx <= 2)
		return (1);
	first_char = str[idx];
	last_char  = str[len - idx - 1];
	return ((first_char == last_char) && _is_palindrome(str, idx + 1));
}
