#include <stdio.h>

/**
 * main - Prints numbers from 1 to 0
 * Return: Always(0)
 *
 */

int main(void)

{
	int x = '0', c = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
