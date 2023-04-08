#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first int
 * @b: second int
 * Return: Null
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*b = *a;
	*a = tmp;
}
