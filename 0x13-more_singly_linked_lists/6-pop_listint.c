#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to the address of the head of the listint_t list.
 * Return: If the linked list is empty, returns 0. Otherwise, returns the
 *         data of the head node.
 */
int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int ret;

    if (*head == NULL)
        return 0;

    tmp = *head;
    ret = (*head)->n;
    *head = (*head)->next;

    free(tmp);

    return ret;
}

