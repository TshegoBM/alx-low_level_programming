#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char a = 48;
	char b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
