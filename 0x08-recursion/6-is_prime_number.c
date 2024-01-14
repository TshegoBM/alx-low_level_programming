#include "main.h"
/**
 * is_prime_number - A function that returns 1 if the input integer is
 *			a prime number, otherwise return 0.
 * @n: Input number.
 *
 * Return: 0 (success)
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
