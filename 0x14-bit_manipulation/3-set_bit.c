#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a specified index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit to set.
 * Return: 1 if it works, -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int a;

    if (index > 63)
    {
        return -1;
    }

    a = 1 << index;
    *n = (*n | a);

    return 1;
}

