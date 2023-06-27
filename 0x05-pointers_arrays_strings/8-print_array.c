#include "main.h"
/**
 * print_array -  a function that prints n elements of an array of integers
 *
 * @a: array
 * @n: number of elements OF the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
