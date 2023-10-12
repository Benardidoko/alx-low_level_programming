#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Function wey go print name
 * @name: printed name
 * @f: the function that will be pointed
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
