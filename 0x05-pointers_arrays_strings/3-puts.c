#include <stdio.h>
/**
 * _puts - function prints a string to stdout
 * @str: the value being considered
 * return: not
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		putchar(str[l]);
		l++;
	}
	putchar('\n');
}
