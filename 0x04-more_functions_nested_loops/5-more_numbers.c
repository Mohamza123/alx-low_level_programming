#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 9
 * Return: Null
 *
 */
void more_numbers(void)
{
	int i, f, s, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				s = i / 10;
				_putchar(s + '0');
			}
			f = i % 10;
			_putchar(f + '0');
		}
		_putchar('\n');
	}
}
