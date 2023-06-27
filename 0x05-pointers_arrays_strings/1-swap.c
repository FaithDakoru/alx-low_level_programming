#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: swap integer
 * @b: swapped integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
