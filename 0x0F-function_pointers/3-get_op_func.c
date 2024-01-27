#include "3-calc.h"


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", &op_add}, /* Points to address of function. Can leave out the & */
		{"-", &op_sub},
		{"*", &op_mul},
		{"/", &op_div},
		{"%", &op_mod},
};

int i;

while (i < 5)
{
	if (strcmp(ops[i].op, s) == 0)
	{
		return ops[i].f;
	}	++i ;
}

	return (0);
}
