#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to be searched.
 * @accept: Set ot characters to search for.
 * Return: Number of bytes in the initial segment of s,
 *		which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{

			if (s[i] == accept[j])
			{
				break;
			}
		j++;
	}

	if (accept[j] == '\0')
	{
		break;
	}

	i++;
	}
	return (i);
}
