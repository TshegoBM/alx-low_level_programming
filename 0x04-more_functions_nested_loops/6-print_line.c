#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
