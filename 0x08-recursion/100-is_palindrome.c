#include "main.h"
#include <string.h>
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * Return: int
 */
int is_palindrome(char *s)
{
int start, len;
start = 0;
len = strlen(s);
if (len == 0 || len == 1)
{
return (1);
}
return (_check_palindrome(s, start, len - 1));
}

/**
 * _check_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * @start: the first character
 * @end: the last character
 * Return: int
 */
int _check_palindrome(char *s, int start, int end)
{
if (s[start] != s[end])
{
return (0);
}
if (start == end || end == (start + 1))
{
return (1);
}
return (_check_palindrome(s, start + 1, end - 1));
}
