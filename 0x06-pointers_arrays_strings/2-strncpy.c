#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: the string to be copied to
 * @src: the string being copied from
 * @n: the input of characters
 * Return: 0 if successful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		if (a < n)
		{
			dest[a] = src[a];
		}
	while (a < n)
	{
		dest[a++] = '\0';
	}
	return (dest);
}
