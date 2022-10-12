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
int len, i;
len = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
ptr = malloc((1 + len) * sizeof(char));
if (!pt)
{
return (NULL);
}
i = 0'
while (i < len)
{
ptr[i] = str[i];
i++;
}
ptr[i] = '\0';
return (ptr);
}
