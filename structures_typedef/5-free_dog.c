#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * free_dog - to free all dogs
 * @d: a pointer (all informations)
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		free(d);
	}
}


















