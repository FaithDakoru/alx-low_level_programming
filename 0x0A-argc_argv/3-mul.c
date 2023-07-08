#include <stdio.h>
#include <stdlib.h>
/**
 * main - mutiplies two numbers
 *
 * @argc: number of argument passed
 * @argv: array containing argument
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	product = a * b;

	printf("%d\n", product);
	return (0);
}
