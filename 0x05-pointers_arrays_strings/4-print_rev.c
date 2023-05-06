#include "main.h"
/**
 * print_rev - print a string in rev order
 * @s: the string
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len >= 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
