#include "main.h"
#include <stdlib.h>
/**
 * strcpy - copy string to another
 * @s1: dest
 * @s2: src
 * Return: s1
 */
char *strcpy(char *s1, char *s2)
{
	int l = 0;

	while (s2[l])
	{
		s1[l] = s2[l];
		l++;
	}
	return (s1);
}
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: dog's name
 * @age: its age
 * @owner: its owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.age = age;
	d.name = strcpy(d.name, name);
	d.owner = strcpy(d.owner, owner);
}
