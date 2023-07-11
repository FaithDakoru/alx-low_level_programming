#include <stdlib.h>
#include "main.h"
/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count, i, flag;

	count = 0;
	flag = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (flag == 0)
			{
				count++;
				flag = 1;
			}
		}
		else
			flag = 0;
	}
	return (count);
}
/**
 * copy_word - copy
 *
 * @str: string
 * @start: start
 * @end: end
 *
 * Return: 0
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	for (i = 0; i < end - start; i++)
		word[i] = str[start + i];
	word[i] = '\0';
	return (word);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, wc;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = count_words(str);
	if (wc == 0)
		return (NULL);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < wc)
	{
		while (str[j] == ' ')
			j++;
		k = j;
		while (str[k] != ' ' && str[k] != '\0')
			k++;
		words[i] = copy_word(str, j, k);
		if (words[i] == NULL)
		{
			while (i >= 0)
			{
				free(words[i]);
				i--;
			}
			free(words);
			return (NULL);
		}
		i++;
		j = k;
	}
	words[i] = NULL;
	return (words);
}
