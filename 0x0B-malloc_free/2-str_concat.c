#include <stdlib.h>
/**
 * *str_concat- A function that concatenates two strings.
 * @s1: destination string.
 * @s2: source string.
 *
 * Return: A pointer to the allocated memory or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int length_s1 = 0;
	int length_s2 = 0;
	int k;
	int l;
	char *new_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}

	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}

	new_string = malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (k = 0; k < length_s1; k++)
		new_string[k] = s1[k];

	for (l = 0; l < length_s2; l++)
	{
		new_string[k + l] = s2[l];
	}

	new_string[k + l] = '\0';


		return (new_string);
}
