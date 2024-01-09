#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - Searches a string for the first occurence of any character
 *		from a specified set of characters.
 * @s: String to be searched.
 * @accept: String containing characters to be searched for.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *		or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
