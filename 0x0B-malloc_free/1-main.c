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
    char *s = _strdup("ALX SE");

    if (s == NULL)
    {
        fprintf(stderr, "Failed to allocate memory\n");
        return EXIT_FAILURE;
    }

    printf("%s\n", s);
    free(s);

    return EXIT_SUCCESS;
}

