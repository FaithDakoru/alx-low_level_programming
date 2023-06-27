#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 * main -  a program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(0));

	while (sum < 2772)
	{
		c = rand() % 128; /* generate a random ASCII character */
		sum += c;

		if (sum > 2772) /* if the sum exceeds the target, undo the last addition */
		{
			sum -= c;
			break;
		}
		printf("%c", c); /* print the character */
	}
	c = 2772 - sum; /* calculate the last character to get the exact sum */
	printf("%c", c);

	return (0);
}
