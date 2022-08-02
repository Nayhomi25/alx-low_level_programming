#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new struct named dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */


struct dog
{
	char *name;
	char *owner;
	float age;
};

void int_dog(struct dog *d, char *name, float age, char *owner);
#endif
