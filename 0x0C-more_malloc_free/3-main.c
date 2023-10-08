#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - Prints a buffer in hexadecimal format.
 *
 * @buffer: The buffer to print.
 * @size: The size of the buffer.
 *
 * Description:
 * This function prints the contents of a buffer in hexadecimal format
 * with a row of 10 elements per line.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i = 0;

    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    if (a == NULL)
    {
        perror("array_range");
        return (1); /* Exit with an error code if array_range fails. */
    }

    simple_print_buffer(a, 11);
    free(a);
    return (0);
}

