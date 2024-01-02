#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
