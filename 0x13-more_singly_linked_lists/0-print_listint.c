#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
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
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

