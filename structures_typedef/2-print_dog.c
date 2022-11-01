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
if (d == NULL)
{
	exit(0);
}
if (d->name == NULL || d->owner == NULL)
{
	printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	printf("Owner: (nil)\n");
}
else
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
