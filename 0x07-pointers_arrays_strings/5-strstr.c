#include "main.h"
#include <stddef.h>
/**
 * *_strstr - Locates a substring.
 * @haystack: String to be searched.
 * @needle: String to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (haystack);
			}
			needle++;
		}
	}
	return (NULL);
}
