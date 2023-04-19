#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - tring length
 * @str: the string
 * Return: len
 */

int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l;
	return (l);
}
/**
 * _strcopy - copy src to dest
 * @src: source
 * @dest: dest
 * Return: dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create new dog
 * @name: its name
 * @age: it age
 * @owner: it owner
 * Return: struct pointer dog or NULL
 */
dog_T *new_dog(char *name, float age, char *owner)
{
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
