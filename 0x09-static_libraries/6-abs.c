#include "main.h"
/**
 * _abs -Entry point
 * Complete the value of an integer
 * @x: an integer
 *
 * Return: absolute value
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
