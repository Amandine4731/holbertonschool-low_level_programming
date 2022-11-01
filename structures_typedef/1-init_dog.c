#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - informations about the dog
 * @d: all informations
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: informations about the dog (name, age and owner)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog;
	d = &dog;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
