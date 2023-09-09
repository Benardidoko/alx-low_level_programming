#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'z';  /* Start with 'z', the last lowercase letter */

    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }

    putchar('\n');
    return (0);
}

