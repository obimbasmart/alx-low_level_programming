#include "main.h"

/**
 * main - driver program: prints program name
 * @argc: lenght of argv
 * @argv: array of args
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	while (*argv)
	{
		printf("%s\n", *argv++);
	}
	return (EXIT_SUCCESS);
}
