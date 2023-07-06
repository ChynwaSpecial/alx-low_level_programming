#include "lists.h"

/**
 * listint_len - number of elements in a linked lists returned
 * @h: listint_t list head pointer
 * Return: nodes returned
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

