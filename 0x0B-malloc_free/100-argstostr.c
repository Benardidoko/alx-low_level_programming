#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments into a single string
 * @ac: number of arguments
 * @av: array of argument strings
 * Return: pointer to the concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int total_length = 0;
	int b, c, d, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length needed for the concatenated string */
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			total_length++;
		}
		total_length++; /* Add 1 for the newline character */
	}
	total_length++; /* Add 1 for the null terminator */

	s = malloc(total_length * sizeof(char));
	if (s == NULL)
		return (NULL);

	/* Copy the arguments into the concatenated string */
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			s[i++] = av[b][c];
		}
		s[i++] = '\n';
	}
	s[i] = '\0';

	return (s);
}

