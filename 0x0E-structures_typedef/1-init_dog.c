#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the struct dog
 * @d: a pointer to an elemnent of type dog
 * @name: a pointer to a char for the name of the dog
 * @age: age of the dog
 * @owner: a pointer to a char for owner of dog
 * Return: NA
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
