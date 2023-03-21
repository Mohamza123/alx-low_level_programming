#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table from 0
 * @n: should be between 0 & 15
 * Return: Null
 */

void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				printf("%i", r);
				if (j < n)
				{
					printf(", ");
					if (i * (j + 1) < 100 && i * (j + 1) > 9)
					{
						printf(" ");
					}
					else if (i * (j + 1) < 10)
					{
						printf("  ");
					}
				}
			}
			printf("\n");
		}
	}
}
