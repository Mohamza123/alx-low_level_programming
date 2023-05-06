#include "main.h"
/**
 * puts2 - print char and skip next
 * @str: the string
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[len])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
