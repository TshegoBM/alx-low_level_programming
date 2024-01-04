#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string, in reverse,
 * followed by a new line.
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int end = 0;
	int start = 0;
	char temp;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	
		start++;
		end--;
	}

	for (int i = 0; i < length; i++)
    		{
        		_putchar(s[i]);
   		 }

    _putchar('\n');
}


