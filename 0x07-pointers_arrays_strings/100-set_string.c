#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 * @str: Pointer.
 * @to: Second string.
 * Return: void
 */

void set_string(char **s, char *to)
{
	int i = 0;
	
	while (*s[i] != '\0')
	{	
		s = &to;
		_putchar(*s);
		s++;
		to++;
	}

}
