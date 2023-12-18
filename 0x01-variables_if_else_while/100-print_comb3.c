#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all combinations of two digits
 * Return: 0 (success)
 */
int main(void)
{
	int a = 48;
	int b = 49;

	while (b <= 57)
	{
		putchar(a);
		putchar(b);

	if (a != 56 || b != 57)
	{
		putchar (',');
		putchar(' ');
	}

	b++;

	if (b > 57)
	{

		a++;
		b = a + 1;

	}
	}
	putchar ('\n');

	return (0);
}
