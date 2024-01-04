#include "main.h"
/**
 * *_strncat - Concatenates two strings
 * @dest: Destination of the string
 * @src: Source of the string
 * @n: bytes to be used
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[length + j] = src[j];
	}

	dest[length + j] = '\0';

	return (dest);
}

