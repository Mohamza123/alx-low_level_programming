#include <stdio.h>

/**
 * main - Prints alphabets in lowercase
 * Return: Always 0
 *
 */

int main(void)

{
	int c;
	for (c = 'a' ; c <= 'z'; c++)
	{
		putchar(c);
	}
	c = '\n';
	putchar(c);
	return (0);
}

