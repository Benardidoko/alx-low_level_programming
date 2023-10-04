#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers of arguments
 * @argc: the arguments do counts
 * @argv: this is the Argument vector for values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
