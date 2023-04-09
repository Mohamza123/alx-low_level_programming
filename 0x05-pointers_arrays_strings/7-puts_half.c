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
	h = (l / 2) + 1;
	if (l % 2 == 1)
	{
		h = (l - 1) / 2;
		h++;
	}
	if (l == 0)
	{
		h = -1;
	}
	for (i = h; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
