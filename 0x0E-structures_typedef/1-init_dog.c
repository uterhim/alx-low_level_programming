#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog func data
 * @d: struct
 * @name: name of dog variable
 * @age: age of dog variable
 * @owner: owner of dog variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
