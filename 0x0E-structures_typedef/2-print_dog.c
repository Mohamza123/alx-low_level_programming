#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print a struct dog
 * @d: the struct to print
 */
void print_dog(struct dog *d)
{
	if (!d)
		printf("");
	else
	{
		if (!d.name)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d.name);

		if (!d.age)
			printf("Age: (nil)\n");
		printf("Age: %f\n", d.age);

		if (!d.owner)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d.owner);
	}
}
