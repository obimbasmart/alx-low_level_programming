#include "3-calc.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * get_op_func - function that selects
 * the correct function to perform
 * @s: the mathematical operator to use for selection
 *
 * Return: pointer to function that takes two ints as args and return int
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	/* declare and initialize structs for each operator */
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod }
	};

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
