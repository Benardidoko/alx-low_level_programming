#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_hex_buffer - Print a buffer in hexadecimal format.
 * @buffer: Pointer to the memory to print.
 * @size: The size of the memory to print.
 */
void print_hex_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0 && i > 0)
			printf("\n");

		printf("0x%02x", buffer[i]);

		if (i < size - 1)
			printf(" ");
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 * Return: Always 0.
 */
int main(void)
{
	char *a;

	a = calloc(98, sizeof(char));
	if (a == NULL)
	{
		perror("calloc");
		return (1);
	}

	strcpy(a, "Best");
	strcpy(a + 4, " School! :)\n");
	a[97] = '!';

	print_hex_buffer(a, 98);
	free(a);

	return (0);
}

