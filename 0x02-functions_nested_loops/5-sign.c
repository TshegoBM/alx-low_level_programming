# include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: number to be used to check
 * Return: 1 if n is greater than 0, 0 if n is zero, else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('/');
	}
	return (0);
}
