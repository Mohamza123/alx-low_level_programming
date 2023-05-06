#include "main.h"
/**
 * print_rev - print a string in rev order
 * @s: the string
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
