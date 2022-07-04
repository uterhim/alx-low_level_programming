#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - dog data
 * @d: d pointer variable of dog
 * Return: 0 for success
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
