#include "main.h"

/**
 * print_last_digit - from its name
 * @c: the number
 * Return: the last digit
 *
 */

int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
