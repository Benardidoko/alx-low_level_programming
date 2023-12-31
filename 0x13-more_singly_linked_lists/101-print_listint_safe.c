#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc_list - Reallocates memory for an array of pointers to nodes.
 * @list: The old list to append.
 * @size: Size of the new list (always one more than the old list).
 * @new: New node to add to the list.
 *
 * Return: Pointer to the new list.
 */
const listint_t **_realloc_list(const listint_t **list, size_t size, const listint_t *new)
{
    const listint_t **newlist;
    size_t i;

    newlist = malloc(size * sizeof(listint_t *));
    if (newlist == NULL)
    {
        free(list);
        exit(98);
    }

    for (i = 0; i < size - 1; i++)
        newlist[i] = list[i];

    newlist[i] = new;
    free(list);

    return newlist;
}

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t i, num = 0;
    const listint_t **list = NULL;

    while (head != NULL)
    {
        for (i = 0; i < num; i++)
        {
            if (head == list[i])
            {
                printf("-> [%p] %d\n", (void *)head, head->n);
                free(list);
                return num;
            }
        }

        num++;
        list = _realloc_list(list, num, head);
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
    }

    free(list);
    return num;
}

