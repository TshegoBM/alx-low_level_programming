#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ellipsis;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start (ellipsis, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ellipsis, int);

	va_end(ellipsis);

	return (sum);
}
