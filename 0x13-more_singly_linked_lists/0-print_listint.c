#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: listint_t list head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

