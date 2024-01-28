#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: Comma separating the numbers
 * @n: Number of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	unsigned int x;

	if (separator == NULL)
		return;

	va_start(args, n);

	/* Call the function one arg at a time */
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, const unsigned int);
		if (i == n - 1)
		{
			printf("%d", x);
		}
		else
		{
			printf("%d%s", x, separator);
		}
	}
	printf("\n");

	va_end(args);
}
