#include <stdio.h>
/**
 * main - driver function
 * Return: 0
 */
int main(void)
{
char alphas[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; i <= 26; i++)
{
putchar(alphas[i]);
}
putchar('\n');
return (0);
}
