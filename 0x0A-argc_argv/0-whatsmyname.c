#include "main.h"
#include <stdlib.h>

/**
 * main - driver program: prints program name
 * @argc: integer
 * @argv: array of args
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (EXIT_SUCCESS);
}
