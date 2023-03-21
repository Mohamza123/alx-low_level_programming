#include "main.h"

/**
 * times_table - prints 9 times table from 0
 * Return: Null
 */

void times_table(void)
{
	int i, j, d1, d2, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0 ; j <= 9; j++)
		{
			c = i * j;
			if (c > 9)
			{
				d1 = c / 10;
				d2 = c % 10;
				_putchar(d1 + '0');
				_putchar(d2 + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
