#include <stdio.h>
/**
 * _puts - print a string to sdout
 * @str : the string
 * Return: void
 */
void _puts(char *str)
{
unsigned int index_count;
index_count = 0;
while (str[index_count] != '\0')
{
putchar(str[index_count]);
index_count++;
}
putchar('\n');
}
