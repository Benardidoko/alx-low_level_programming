#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase, followed by a new line.
 *              Uses putchar function only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char hex_digit;

    for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
    {
        putchar(hex_digit);
    }

    for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
    {
        putchar(hex_digit);
    }

    putchar('\n');

    return (0);
}

