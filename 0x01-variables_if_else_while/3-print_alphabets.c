#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and then in uppercase
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

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	c = '\n';
	putchar(c);
	return (0);
}

