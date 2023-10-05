#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - this concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int m = 0, n = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
	{
		while (*ptr++)
			m++;
	}
	else
	{
		s1 = "";
	}
	ptr = s2;
	if (s2)
	{
		while (*ptr++)
			m++;
	}
	else
	{
		s2 = "";
	}
	ret = malloc(m + n + 1);
	if (!ret)
		return (NULL);
	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (ret);
}
