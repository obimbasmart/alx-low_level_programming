#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - print a single character to output stream
 * Return: 0
 */
int _putchar(char the_char)
{
return (write(1, &the_char, 1));
}
