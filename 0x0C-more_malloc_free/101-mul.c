#include "main.h"
#include <ctype.h>
/**
 * main - driver program: multiply args
 * @argc: lenght of argv
 * @argv: array of args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int product;

	product = 1;
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	argv++;
	while (*argv)
	{
		if (!_isvalid_integer(*argv))
		{
			printf("Error\n");
			exit(98);
		}
		product *= atoi(*argv);
		argv++;
	}
	printf("%d\n", product);
	return (EXIT_SUCCESS);
}


/**
 * _isvalid_integer - check if a string is valid int
 * @str: string
 * Return: int - 0 if false, 1 if true
 */
int _isvalid_integer(char *str)
{
	/* check for empty string or NULL ptr */
	if (str == NULL || *str == '\0')
		return (0);

	/* check for leading sign +/- */
	if (*str == '+' || *str == '-')
	{
		str++;
		if (*str == '\0')
			return (0);
	}

	/* check the remaining chars */
	while (*str)
	{
		if (!isdigit((unsigned char)*str)) /* not a digit */
			return (0);
		str++;
	}
	return (1);
}
