#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char a = 122;

	while (a >= 97)
	{
		putchar(a);
		--a;
	}
	putchar('\n');

	return (0);
}
