#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all combinations of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;

	while (c <= 57)
	{
		putchar(a);
		putchar(b);
		putchar(c);

	if (a != 55 || b != 56 || c != 57)
	{
		putchar(',');
		putchar(' ');
	}

	c++;

	if (c > 57)
	{
		b++;
		c = b + 1;
	}
	if (b > 56)
	{
		a++;
		b = a + 1;
		c = b + 1;
	}
	}

	putchar('\n');

	return (0);
}
