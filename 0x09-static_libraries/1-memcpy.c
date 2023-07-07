#include "main.h"
/**
 * *_memcpy - a function that locates a character in a string.
 *
 * @src: array
 * @dest: array
 * @n: int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
