#include <stdio.h>
/**
 * puts_half - print half of a string
 * the function should print the second half of the string
 * for odd lenght - print n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * starting with the first character, followed by a new line.
 * @str : the string
 * Return: void
 */
void puts_half(char *str)
{
    int idx;
    int i;
    idx = 0;
    while (str[idx] != '\0')
    {
        idx++;
    }
    for (i = ((idx / 2) + (idx % 2)); i < idx; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}


