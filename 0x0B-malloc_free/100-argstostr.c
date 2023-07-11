#include "main.h"
#include <stdlib.h>
/**
 * arglen - concatenate argument
 *
 * @ac: argument
 * @av: argument pointer
 *
 * Return: len
 */
int arglen(int ac, char **av)
{
	int len, i, j;

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	return (len);
}
/**
 * argstostr - argument
 *
 * @ac: argument
 * @av: argument
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = arglen(ac, av);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
