#include "lists.h"

/**
 * print_list - Print all elements of a singly linked list and count them.
 * @h: Pointer to the head of the list.
 * Return: Number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t n_elems = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		n_elems++;
	}

	return (n_elems);
}

