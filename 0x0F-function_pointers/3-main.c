#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - driver programm for calc
 * @argc: the argument count passed to programm
 * @argv: array containing arguments passed
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int (*action)(int a, int b);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	action = get_op_func(argv[2]);
	if (action == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", action(num1, num2));

	return (0);
}
