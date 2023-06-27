#include "3-calc.h"

/**
 * main - calculator programm
 * @argc: size of argv
 * @argv: array of args
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*action)(int, int);
	int result;

	result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	action = get_op_func(argv[2]);

	/* invalid operation */
	if (!action)
	{
		printf("Error\n");
		exit(99);
	}

	result = action(atoi(argv[1]), atoi(argv[3]));

	/* invalid result */
	if (result < 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);

	return (EXIT_SUCCESS);
}

