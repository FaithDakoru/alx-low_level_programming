#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: string to locate
 * @needle: string to locate
 *
 * Return: pointer at the substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, k = i; needle[j] != '\0'; j++, k++)
		{
			if (haystack[k] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
