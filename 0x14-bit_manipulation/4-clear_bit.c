#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to an unsigned long int.
 * @index: The index (starting from 0) of the bit to be cleared.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int i;

    if (index > (sizeof(unsigned long int) * 8 - 1))
        return -1;

    i = ~(1UL << index);
    *n = *n & i;

    return 1;
}

