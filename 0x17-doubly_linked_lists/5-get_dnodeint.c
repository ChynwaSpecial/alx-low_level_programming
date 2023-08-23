#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head pointer
 * @index: index of the node, starting from 0
 * Return: Null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *current;

	size = 0;
	if (head == NULL)
	return (NULL);

	current = head;
	while (current)
	{
	if (index == size)
	return (current);
	size++;
	current = current->next;
	}
	return (NULL);
}
