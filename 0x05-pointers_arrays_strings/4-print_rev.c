#include "main.h"
/**
 * print_rev - print the string in rev 
 * @s: the string
 * Return: Null
 */

void print_rev(char *s)
{
	int i;
	for (i = _strlen(*s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
