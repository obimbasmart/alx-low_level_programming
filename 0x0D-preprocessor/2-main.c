#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the file it was compiled from
 * Return: int
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}

