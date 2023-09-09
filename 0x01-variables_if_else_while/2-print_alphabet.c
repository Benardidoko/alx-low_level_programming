#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    /* Declare a variable to store the character */
    char c;

    /* Loop through the lowercase alphabet */
    for (c = 'a'; c <= 'z'; c++)
    {
        /* Use putchar to print each character */
        putchar(c);
    }

    /* Print a newline character */
    putchar('\n');

    return (0);
}

