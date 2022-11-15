#include "lists.h"
/**
 * add_node - to add a new node at the beginning of a list
 * @head: the first node
 * @str: a pointer string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = *head;
	*head = p;

	return (p);
}


