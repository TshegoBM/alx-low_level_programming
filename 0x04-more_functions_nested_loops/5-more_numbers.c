#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers , from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 10)
	{
		b = 48;
		while (b <= 57)
		{
			_putchar(b);
			b++;
		
		c = 49;	
		if (b > 57)
		{
			_putchar(c);
			b = b + 1;
		}
		}
	
	_putchar('\n');
	a++;
	}
}
