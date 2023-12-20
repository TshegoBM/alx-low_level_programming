#include "main.h"
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase, followed by a new line
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}


