#include <stdio.h>

/**
 * main - prints the number of arguments
 * passed to the program
 *
 * @argc: argumentc
 *
 * @argv: vector of arguments
 *
 *Return: always 0
 */
int main(int argc, char *argv)
{

	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
