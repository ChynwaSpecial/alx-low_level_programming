#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head pointer
 * @n: the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *h;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_element;
	}
	else
	{
		*head = new_element;
	}

	new_element->prev = h;

	return (new_element);
}
