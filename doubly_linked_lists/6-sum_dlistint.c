#include "lists.h"
/**
 * sum_dlistint - sum all the data of a list
 * @head: pointer
 * Return: the sum of numbers
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int resultat = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		resultat += head->n;
		head = head->next;
	}
	return (resultat);
}
