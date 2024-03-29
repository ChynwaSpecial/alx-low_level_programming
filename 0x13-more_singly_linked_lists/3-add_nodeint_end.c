#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head:first element pointer
 * @n: input interger
 * Return:  new node poniter, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}


