#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
    char *result;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s arg1 arg2 ... argN\n", argv[0]);
        return (1);
    }

    result = argstostr(argc - 1, argv + 1);
    if (result == NULL)
    {
        fprintf(stderr, "Error: Unable to allocate memory\n");
        return (1);
    }

    printf("%s", result);
    free(result);
    return (0);
}

