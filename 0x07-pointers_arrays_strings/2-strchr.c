#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Locates a character in a string.
 * @s: String to be searched.
 * @c: Character to be located.
 * Return: A pointer to the first occurence of the character c in the string
 *		or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
