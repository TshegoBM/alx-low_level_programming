#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers , from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
				_putchar((b % 10) + '0');
				b++;
		}
		_putchar('\n');
		a++;
	}
}
