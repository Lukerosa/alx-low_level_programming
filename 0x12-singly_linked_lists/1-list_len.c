#include "lists.h"

/**
 * list_len - Entry point
 * Desc: Returns number of elements in linked list_t
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
