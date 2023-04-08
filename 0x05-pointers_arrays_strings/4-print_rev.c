#include "main.h"
/**
 * print_rev - print the string in rev 
 * @s: the string
 * Return: Null
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i = i;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
