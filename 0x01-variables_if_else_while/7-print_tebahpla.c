#include <stdio.h>
/**
 * main - driver function
 * Return: 0
 */
int main(void)
{
    int i;
    char alphas[] = "abcdefghijklmnopqrstuvwxyz";
    for (i = 25; i >= 0; i--)
    {
        putchar(alphas[i]);
    }
    putchar('\n');
    return (0);
}
