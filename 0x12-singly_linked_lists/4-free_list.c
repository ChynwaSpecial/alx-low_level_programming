#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list pointer to be freed
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
	       current	= head->next;
	       free(head->str);
	       free(head);
	       head = current;
	}
}

