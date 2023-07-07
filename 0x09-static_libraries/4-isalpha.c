#include "main.h"
/**
 * _isalpha - Entry point
 * Write a function that checks for alphabetic character
 * @c: Valuse of ASCII
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
