#include "main.h"

/**
 * wordcount - program to get the word count
 * @str: string to count words present
 * Return: number of words
*/

int wordcount(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != ' ' && *str != '\0')
				str++;
			words++;
		}
	}
	return (words);
}

/**
 * free_array - Program for free arr[i]
 * @ar: array to free
 * @i: array[i]
 * Return: arrays
*/

void free_array(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}

/**
