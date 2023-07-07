#include "main.h"
#include <stdlib.h>
/**
 * _isdigit - Write a function
 * That checks for a digit (0 through 9)
 *
 * @c: ASCII value
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
