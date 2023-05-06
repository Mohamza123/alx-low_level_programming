#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, n, len = 0;

	while (str[len])
		len++;

	n = len / 2;
	if (len % 2 != 0)
		n = (len - 1) / 2;

	for (i = n; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
