#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return (EXIT_FAILURE);
    }
    printf("%s\n", s);
    free(s);
    return (EXIT_SUCCESS);
}

