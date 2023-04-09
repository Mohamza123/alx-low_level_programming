#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: the string to
 */
void puts_half(char *str)
{
	int l, i, h;

	for (i = 0; str[i] != '\0'; i++)
	{
		l = i;
	}
	h = l;
	if (l % 2 == 1)
	{
		h = (l - 1) / 2;
	}
	for (i = h; i <= l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
