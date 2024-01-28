#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	/* conditions and variables */
	unsigned int i;
	const char *x;

	if (separator == NULL)
		return;

	if (n == 0)
	{
		printf("nil");
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, const char *);

		if (i == n - 1)
		{
			printf("%s", x);
		}
		else
		{
			printf("%s%s", x, separator);
		}
	}
	printf("\n");

	va_end(args);
}


