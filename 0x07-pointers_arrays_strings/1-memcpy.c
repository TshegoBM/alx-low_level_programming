#include "main.h"
/**
 * *_memcpy - Copies n bytes of memory from the source to the destination.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the src memory area.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
