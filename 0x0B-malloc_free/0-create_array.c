#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars with
 * specific sizes
 *
 * @size: size of arrays
 * @c: char
 *
 * Return: 0 or arr
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
