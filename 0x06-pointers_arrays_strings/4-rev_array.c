#include "main.h"
/**
 * reverse_array - a function that reverses
 * the content of an array of integers
 *
 * @a: integer
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
