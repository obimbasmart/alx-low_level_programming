#ifndef CALC_H
#define CALC_H

/* builtins */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct operationData - structure holds data for maths calculation
 * @opcode: operation code e.g +, -, /, *
 * @action: function associated for each opcode
 *
 * Description: This is a simple structure that holds information
 * about an operation and its corresponding action/function
 */
typedef struct operationData
{
	char *opcode;
	int (*action)(int, int);
} operation_d;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *s))(int, int);
#endif /* CALC_H */

