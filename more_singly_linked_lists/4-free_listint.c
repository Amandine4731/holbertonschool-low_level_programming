#include "lists.h"
/**
 * free_listint - to free a list
 * @head: a pointer
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
