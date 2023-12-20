#include "main.h"
/**
 * print_alphabet - prints alphabet
 * Description: Print the alphabet in lowercase, followed by a new line
 * Return: void (success)
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


