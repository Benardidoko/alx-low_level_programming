#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: integer 1
 * @n: integer 2
 * void has no return type
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
