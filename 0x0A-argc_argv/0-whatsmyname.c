#include <stdio.h>

/**
 * main - print program name
 * @argc: the command line argument count
 * @argv: the command line argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
    {
        printf("%s\n", argv[0]);
    }
    return (0);
}
