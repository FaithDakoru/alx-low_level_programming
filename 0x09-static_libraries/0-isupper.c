#include "main.h"
#include <stdlib.h>
/**
 * _isupper - Write a function
 * That checks for uppercase character
 *
 * @c: ASCII value
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
