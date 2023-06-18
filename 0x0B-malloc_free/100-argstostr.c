#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of args
 * @av: array of args
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len, i, j, k;

	if (ac == 0 || !av)
		return (NULL);

	len = _get_arg_len(ac, av);
	str = malloc(sizeof(char) * len);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[j + k] = av[i][j];

		str[j + k] = '\n';
		k += j + 1;
	}
	return (str);
}

/**
 * _get_arg_len - get the number elements required for concatenation
 * @av: array of strings
 * @ac: size of elements in array
 * Return: int
 */
int _get_arg_len(int ac, char **av)
{
	int _len, id;

	_len = id = 0;
	for (; id < ac; id++)
		_len += strlen(av[id]);

	_len += ac + 1;
	return (_len);
}

