#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: index of the bit to get
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1UL << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
