#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = min + i;
	return (a);
}
