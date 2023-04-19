#include "function_pointers.h"

/**
 * array_iterator - map an array through functiont pointer
 * @array: the arr
 * @size: it's size
 * @action: the func pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
			action(*array++);
	}
}
