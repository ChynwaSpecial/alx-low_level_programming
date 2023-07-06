#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: linked list head pointer
 * Return: the head node,otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodes;

	if (!head || !*head)
		return (0);

	nodes = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nodes);
}

