#include "lists.h"

/**
 * list_len_recursive - Count the number of elements in a linked list using recursion.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */
size_t list_len_recursive(const list_t *h)
{
    if (h == NULL) {
        return 0;  // Base case: an empty list has 0 elements.
    }

    // Recursive case: count this element and continue counting in the rest of the list.
    return 1 + list_len_recursive(h->next);
}

size_t list_len(const list_t *h) {
    return list_len_recursive(h);
}

