#include "dog.h"
#include<stdlib.h>
/**
 * new_dog - dog data
 * @name: name of dog variable
 * @age: age of dog variable
 * @owner: owner of dog variable
 * Return: 0 for success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int owner_l, name_l, i;
	dog_t *dog2;

	owner_l = 0;

	name_l = 0;
	while (name[name_l++])
		;
	while (owner[owner_l++])
		;
	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);
	dog2->name = malloc(name_l * sizeof(dog2->name));
	if (dog2 == NULL)
		return (NULL);
	for (i = 0; i < name_l; i++)
		dog2->name[i] = name[i];

	dog2->age = age;

	dog2->owner = malloc(owner_l * sizeof(dog2->owner));
	if (dog2 == NULL)
		return (NULL);
	for (i = 0; i < owner_l; i++)
		dog2->owner[i] = owner[i];
	return (dog2);
}
