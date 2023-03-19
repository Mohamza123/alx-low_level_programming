#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except e,q
 * Return: Always 0
 *
 */

int main(void)

{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

