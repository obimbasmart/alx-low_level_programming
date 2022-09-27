#include <stdio.h>
/**
 * puts2 - print every other character of a string,
 * starting with the first character, followed by a new line.
 * @str : the string
 * Return: void
 */
void puts2(char *str)
{
int index_count;
int i;
index_count = 0;
while (str[index_count] != '\0')
{
index_count++;
}
for (i = 0; i < index_count; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}



