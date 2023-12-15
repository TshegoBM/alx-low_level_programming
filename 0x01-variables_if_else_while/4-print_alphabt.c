#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet excep q and e
 * Return: 0 (success)
 */
int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		if (a != 101 && a != 113)
	{
		putchar(a);
	}
		a++;
	}
	putchar('\n');

	return (0);
}


