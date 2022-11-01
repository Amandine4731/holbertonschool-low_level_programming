#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - informations about the dog
 * @d: all informations
 * Description: informations about the dog (name, age and owner)
 */
void print_dog(struct dog *d)
{
if (d->name == NULL || d->owner == NULL)
{
	d->name = "(nil)";
	d->owner = "(nil)";
}
if (d != NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
else if (d == NULL)
{
printf("\n");
}
}
