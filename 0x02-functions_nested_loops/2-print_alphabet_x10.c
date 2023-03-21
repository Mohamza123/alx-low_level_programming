#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: Null
 *
 */
void print_alphabet_x10(void)
{
	int x = 0;
	int c = 'a';

	while (x < 10)
	{
		while (c < 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		x++;
		c = 'a';
	}
}
