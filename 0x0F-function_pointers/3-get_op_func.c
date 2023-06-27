#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform
 * base on the opcode
 * @s: opcode
 *
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	int id;

	operation_d op_array[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	id = 0;
	while (op_array[id].opcode)
	{
		if (strcmp(op_array[id].opcode, s) == 0)
			return (op_array[id].action);
		id++;
	}
	/* no operataion match */
	return (NULL);
}
