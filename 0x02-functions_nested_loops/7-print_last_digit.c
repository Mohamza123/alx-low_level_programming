#include "main.h"

/**
 * print_last_digit - from its name
 * @c: the number
 * Return: the last digit
 *
 */

int print_last_digit(int c)
{
	c = c % 10;
	_putchar(c);
	return (c);
}
