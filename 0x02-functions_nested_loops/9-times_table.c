#include <stdio.h>
/**
 *
 */
int main(void)
{
	char a;
	int b = 48;

	while (b < 10)
	{
		a = 48;
		while (a == 48)
		{
			putchar(a);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		b++;
	}
	return (0);
}
