#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* Traverse the list */
	while (h != NULL)
	{
		count++;        /* count current node */
		h = h->next;   /* move to next node */
	}

	return (count);
}
