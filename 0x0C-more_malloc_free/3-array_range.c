#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - create an array of ints
 * @min: the min
 * @max: the max
 * Return: a pointer to the arr or NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
