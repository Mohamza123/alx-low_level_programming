#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: the dog to init
 * @name: its name
 * @age: its age
 * @owner: owner of it
 *
 * Return: void
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
