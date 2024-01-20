#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - Function that returns a pointer to a newly allocated
 *		space in memory, which contains a copy of the string
 *		given as a parameter.
 * @str: String to be copied
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *copy;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}


	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);


	for (i = 0; i < length; i++)
	{
		copy[i] = str[i];
	}

	copy[length] = '\0';

	return (copy);
}





