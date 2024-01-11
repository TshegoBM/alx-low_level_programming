#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to be measured.
 *
 * Return: 0 (success)
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (length);
	}

	length = 1 + _strlen_recursion(s + 1);

	return (length);
}
