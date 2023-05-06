#include "main.h"
/**
 * swap_int - swap two inegers
 * @a: pointer to the first int
 * @b: pointer to the second int
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
