#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - informations about the new dog
 * @d: all informations
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: informations about the new dog (name, age and owner)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o;
	dog_t *t = 0;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
	{
		free(t);
		free(t);
		return (NULL);
	}

	n = strlen(name) + 1;
	o = strlen(owner) + 1;

	t->name = malloc(sizeof(char) * (n + 1));
	if (t->name == NULL)
	{
		free(t);
		return (NULL);
	}
	t->owner = malloc(sizeof(char) * (o + 1));
	if (t->owner == NULL)
	{
		free(t);
		return (NULL);
	}
	t->age = age;
	t->name = strcpy(t->name, name);
	t->owner = strcpy(t->owner, owner);
	return (t);
}
