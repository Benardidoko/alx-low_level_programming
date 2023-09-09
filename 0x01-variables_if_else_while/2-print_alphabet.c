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
    char c; /* Declare a variable to store the character */

    for (c = 'a'; c <= 'z'; c++) /* Loop through the lowercase alphabet */
    {
        putchar(c); /* Use putchar to print each character */
    }

    putchar('\n'); /* Print a newline character */

    return (0);
}

