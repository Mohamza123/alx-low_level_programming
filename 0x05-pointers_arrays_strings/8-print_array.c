#include "main.h"
/**
 * print_array - prints n emelments of an array of ints
 * @a: the array
 * @n: num of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n && a[i]; i++)
	{
		if (i != n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i\n", a[i]);
	}
}
