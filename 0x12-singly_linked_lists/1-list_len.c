#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
    if (h == NULL)
    {
        // Base case: When the list is empty, return 0.
        return 0;
    }
    else
    {
        // Recursive case: Count the current element and move to the next.
        return 1 + list_len(h->next);
    }
}

