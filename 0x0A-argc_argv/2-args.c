#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints all arguments its receives.
 * @argc: Argument count.
 * @argv: Argument value.
 *
 * Return: 0 - (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
