#include "main.h"
/**
 * set_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit, starting from 0
 * Return: the value of the bit at index or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
