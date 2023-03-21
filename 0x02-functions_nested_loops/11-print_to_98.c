#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints from input number to 98
 * @n: the input
 * Return: Null
 *
 */
void print_to_98(int n);
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%i, ", i);
	}
	printf("98\n");
}
