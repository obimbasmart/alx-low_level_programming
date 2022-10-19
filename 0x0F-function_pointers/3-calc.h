#ifndef CALC_H
#define CALC_H

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

/**
 * struct op - structure representing a maths operation
 * @op: the mathemematical operator
 * @f: the function associated to the mathematical operator
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

#endif /* end of CALC_H */

