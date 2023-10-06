#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this allocates memory
 * @b: the unsigned integer
 * Return: the pointer to the new memory
 */
void *malloc_checked(unsigned int b)
{
	void *set;

	set = malloc(b);
	if (set == NULL)
	{
		exit(98);
	}
	return (set);
}
