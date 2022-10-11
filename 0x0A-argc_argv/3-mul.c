#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print all the argument passed to a program
 * @argc: the command line argument count
 * @argv: the command line argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int sum, i;
sum = 0;
i = 1;
if (argc == 1)
{
printf("%d\n", sum);
return (0);
}
while (i < argc)
{
if (_isnumber(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (0);
}
i++;
}
printf("%d\n", sum);
return (0);
}

/**
 * _isnumber - check if a string is a number
 * @s: the string
 * Return: 0 if false, 1 if true
 */
int _isnumber(char *s)
{
int i;
for (i = 0; s[i]!= '\0'; i++)
{
if (isdigit(s[i]) == 0)
return 0;
}
return 1;
}
