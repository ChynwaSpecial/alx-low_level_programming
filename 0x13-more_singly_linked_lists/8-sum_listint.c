#include "lists.h"

/**
 * sum_listint - the sum of all the data in the linked list
 * @head: head pointer
 * Return: returng sum, otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
