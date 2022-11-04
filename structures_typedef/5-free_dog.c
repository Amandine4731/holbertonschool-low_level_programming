#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * free_dog - to free all dogs
 * @d: a pointer (all informations)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		d->name = NULL;
		free(d->owner);
		d->owner = NULL;
		free(d);
		d = NULL;
	}
}


















