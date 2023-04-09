#include "main.h"
/**
 * puts2 - prints every other charachter
 * @str: the string to
 */
void puts2(char *str)
{
	int l, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		l = i;
	}
	for (i = 0; i <= l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
