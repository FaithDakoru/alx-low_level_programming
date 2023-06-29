#include "main.h"
/**
 * *cap_string - Capitalize all words of a string
 *
 * @s: string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	int flag = 1;

	while (s[i] != '\0')
	{
		if (flag == 1 && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			flag = 0;
		}
		else if (strchr("\t\n,;.!?\"(){}", s[i]))
		{
			flag = 1;
		}
		i++;
	}
	return (s);
}
