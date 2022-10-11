#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - sum and print all the digits passed to a program
 * @argc: the command line argument count
 * @argv: the command line argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int mul, i, sum;
sum = 0;
i = 1;
if (argc < 2)
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
i = 0;
if (s[0] == '-')
{
i = 1;
}
for (; s[i] != '\0'; i++)
{
if (isdigit(s[i]) == 0)
return (0);
}
return (1);
}
