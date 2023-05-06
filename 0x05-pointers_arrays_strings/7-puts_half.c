#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len])
		len++;

	if (len % 2 != 0)
		len--;

	for (i = len / 2 ; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
