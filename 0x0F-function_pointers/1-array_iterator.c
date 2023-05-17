#include "function_pointers.h"
/**
 * array_iterator - ececutes a function to the elements in the array
 * @array: the array
 * @size: size of the array;
 * @action: the function to do on elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
