#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: the string to
 */
void puts_half(char *str)
{
	int l, i, h;

	l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	h = l / 2;
	if(l % 2 == 1)
	{
		h = (l + 1) / 2;
	}
	for (i = h; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
