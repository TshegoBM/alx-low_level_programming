#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all combinations of single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int a = 48;
	
	while (a <= 57)
	{
		putchar(a);
	if (a < 57)
	{
		putchar(',');
		putchar(' ');
	}

	a++;

	}
	putchar('\n');

	return (0);
}

