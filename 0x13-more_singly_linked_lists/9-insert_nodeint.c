#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list,
 * @head: head pointer of first node
 * @idx: index where the new node is added
 * @n: input data
 * Return: new node pointer, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;

			return (newNode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
