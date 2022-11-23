#include "lists.h"
/**
 * free_dlistint - to free a list
 * @head: a pointer
 */
void free_dlistint(dlistint_t *head);
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
