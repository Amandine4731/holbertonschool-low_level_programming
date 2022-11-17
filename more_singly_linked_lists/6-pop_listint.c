#include "lists.h"
/**
  * pop_listint - eletes the head node of a list / return the head node’s data
  * @head: pointer pointer
  * Return: n or  if list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = (*head)->n;
	if (head == NULL)
		return (0);

	else
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return (n);
}
