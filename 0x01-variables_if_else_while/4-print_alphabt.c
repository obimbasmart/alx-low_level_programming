#include <stdio.h>
/**
 * main - driver function
 * Return: 0
 */
int main(void)
{
    int i;
    char alphas[] = "abcdefghijklmnopqrstuvwxyz";
    for (i = 0; i <= 25; i++)
    {
        if (alphas[i] == 'q' || alphas[i] == 'e')
        {
            continue;
        }
        putchar(alphas[i]);
    }
    putchar('\n');
    return (0);
}
