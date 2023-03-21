#include "main.h"

/**
 * times_table - prints 9 times table from 0
 * Return: Null
 */

void times_table(void)
{
	int i, j, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0 ; j <= 9; j++)
		{
			c = i * j;
			_putchar(c + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
