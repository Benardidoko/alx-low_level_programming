#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this returns a pointer to a newly allocated space in memory
 * @str: for the character
 * Return: returns a copy of the string given a parameter
 */

char *_strdup(char *str)
{
	int m = 0, n = 0;
	char *ch;

	if (str == NULL)
		return (NULL);
	while (str[n] != '\0')
		n++;
	ch = malloc((n + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	while (str[m] != '\0')
	{
		ch[m] = str[m];
		m++;
	}
	return (ch);
}

