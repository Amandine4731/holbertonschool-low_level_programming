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
	if (d->name == NULL)
{
	printf("Name: (nil)\n");
}
if (d->age == 0)
{
printf("Age: (nil)\n");
}
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
if (d != NULL)
{
	 printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
