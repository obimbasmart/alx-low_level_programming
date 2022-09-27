#include <stdio.h>
/**
 * print_rev - print string in reversee
 * @str : the string
 * Return: void
 */
void print_rev(char *str)
{
unsigned int index_count;
index_count = 0;
while (str[index_count] != '\0')
{
index_count++;
}
while (index_count >= 0)
{
putchar(str[index_count - 1]);
index_count--;
}
putchar('\n');
}
