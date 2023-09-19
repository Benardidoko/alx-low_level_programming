#include <stdio.h>
/**
 * print_rev - function that prints in reverse a string
 * @s: the value being considered
 * return: 0 if successful
 */
void print_rev(char *s)
{

	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}
	for (n = (fcounter - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
