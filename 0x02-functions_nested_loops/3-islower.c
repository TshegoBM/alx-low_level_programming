#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: the character to be checked
 * Return: 1 if c is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
