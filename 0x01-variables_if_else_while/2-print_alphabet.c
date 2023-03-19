#include <stdio.h>

/**
 * main - Prints alphabets in lowercase
 * Return: Always 0
 *
 */

int main(void)

{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = '\n';
	putchar(c);
	return (0);
}

