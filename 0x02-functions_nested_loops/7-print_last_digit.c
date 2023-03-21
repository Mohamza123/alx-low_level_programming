#include "main.h"

/**
 * print_last_digit - from its name
 * @c: the number
 * Return: the last digit
 *
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	c = c % 10;
	_putchar(c + '0');
	return (c);
}
