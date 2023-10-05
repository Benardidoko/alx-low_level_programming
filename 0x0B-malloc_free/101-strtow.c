#include "main.h"
#include <stdlib.h>

/**
 * word_counter - function counts the number of words in string
 * @s: string representation
 * Return: returns number of words
 */
int word_counter(char *s)
{
	int a, c, w;

	a = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits a string to these words
 * @str: string representation
 * Return: returns pointer to an array of string
 */
char **strtow(char *str)
{
	char **m, *t;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
