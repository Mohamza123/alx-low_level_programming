#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strcpy - copy a string to other
 * @s1: dest
 * @s2: src
 * Return: s1
 */
char *strcpy(char *s1, char *s2)
{
	int len1, len2, i;

	len2 = len1 = 0;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	s1 = malloc(len2 * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	while (s2[len1] != '\0')
		s1[len1] = s2[len1];
	s1[len2] = '\0';
	return (s1);
}
/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: it's age
 * @owner: its owner
 * Return: the struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = strcpy(d->name, name);
	d->owner = strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
