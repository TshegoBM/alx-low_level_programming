#include <stdio.h>
/**
 * main - A program that prints its name, followed by a new line.
 * @argc: Argument count.
 * @argv: Argument value.
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
