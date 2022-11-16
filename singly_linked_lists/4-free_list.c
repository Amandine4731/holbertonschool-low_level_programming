#include "lists.h"
/**
 * free_list - to free a list
 * @head: a pointer
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		free_list(head->next);
		head->next = NULL;
		free(head->str);
		head->str = NULL;
		free(head);
		head = NULL;
	}
}
