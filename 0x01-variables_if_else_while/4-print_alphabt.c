#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except e,q
 * Return: Always 0
 *
 */

int main(void)

{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	c = '\n';
	putchar(c);
	return (0);
}

