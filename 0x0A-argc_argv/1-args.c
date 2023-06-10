#include "main.h"
#include <stdlib.h>

/**
 * main - driver program: prints program name
 * @argc: lenght of argv
 * @argv: array of args
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
