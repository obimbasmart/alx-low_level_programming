#include "main.h"

/**
 * main - driver program: multiply two numbers
 * @argc: lenght of argv
 * @argv: array of args
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (EXIT_SUCCESS);
}
