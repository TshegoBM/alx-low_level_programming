#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: variable to be checked
 * Return: lastDigit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	n = -n;

	lastDigit = n % 10;
	_putchar('0' + lastDigit);

	return (lastDigit);
}
