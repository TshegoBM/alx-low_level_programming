#include "main.h"
/**
 * *cap_string - A function that capitalizes all words of a string.
 * @str: The string to convert
 *
 * Return: A char pointer to the modified string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
					|| str[i - 1] == '\n' || str[i - 1] ==
					',' || str[i - 1] == '.' || str[i - 1]
					== '!' || str[i - 1] == '?' ||
					str[i - 1] == '"' || str[i - 1] == '('
					|| str[i - 1] == ')' || str[i - 1] ==
					'{' || str[i - 1] == '}')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}
	return (str);
}
