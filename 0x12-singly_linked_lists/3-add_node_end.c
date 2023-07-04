#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: list_t list double pointer
 * @str: new string in the node
 * Return: new element address, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next)
		current = current->next;

	current->next = newNode;
	return (newNode);
}
