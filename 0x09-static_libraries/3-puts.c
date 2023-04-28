#include "main.h"
/**
 * _puts - printss a string
 * @str: the string to be printed
 * Return: Null
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
