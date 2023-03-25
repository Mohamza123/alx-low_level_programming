#include "main.h"
/**
 * print_triangle - print triangle of size n
 * @n: size of it
 * Return: Null
 */
void print_triangle(int n)
{
	int i, j, k;

	for (i = 1; i < n + 1; i++)
	{
		for (j = n - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
