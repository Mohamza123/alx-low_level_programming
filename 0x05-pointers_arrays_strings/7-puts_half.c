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
	if (l == 0)
	{
		_putchar('\n');
		return (0);
	}
	h = (l / 2) + 1;
	if (l % 2 == 1)
	{
		h = (l - 1) / 2;
		h++;
	}
	for (i = h; i <= l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
