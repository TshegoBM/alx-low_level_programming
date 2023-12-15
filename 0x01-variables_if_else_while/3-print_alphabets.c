#include <stdio.h>
/**
 * main - Entry point
 * Description: Print both upper and lowecase alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char a = 97;
	char b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return 0;
}
