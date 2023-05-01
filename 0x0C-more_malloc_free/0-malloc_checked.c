#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocate memory
 * @b: pointer to the allocated memory
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
