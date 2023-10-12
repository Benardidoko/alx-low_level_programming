#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using a callback function.
 * @name: A pointer to the name to be printed.
 * @printer: A function pointer to the printing function.
 *
 * Return: void.
 */
void print_name(char *name, void (*printer)(char *))
{
    if (name != NULL && printer != NULL)
    {
        printer(name);
    }
}

