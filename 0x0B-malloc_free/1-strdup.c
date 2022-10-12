#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * and initialize it with @c
 * @str: the string to copy
 * Return: int
 */
char *_strdup(char *str)
{
char *ptr;
int len;
len = 0;
while (str[len] != '\0')
{
len++;
}
ptr = malloc(len * sizeof(char));
if (!ptr || str == NULL)
{
ptr = 0;
return (ptr);
}
ptr = str;
return (ptr);
}
