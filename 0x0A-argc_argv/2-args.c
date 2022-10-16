#include <stdio.h>

/**
 * main - print all the argument passed to a program
 * @argc: the command line argument count
 * @argv: the command line argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
    int i;
    i = 0;
    while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }
    return (0);
}
