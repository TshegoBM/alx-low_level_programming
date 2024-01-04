#include "main.h"
/**
 * puts_half - Prints half of a string,
 * followed by a new line
 * @str: Parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length = 0;
	int n;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	n = (length - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
