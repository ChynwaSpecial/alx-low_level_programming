#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
