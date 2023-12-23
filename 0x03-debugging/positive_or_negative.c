#include "main.h"
/**
 * main - Entry point
 * Description: Assigns a random number to variable n on each execution
 * Return: 0 (success)
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
