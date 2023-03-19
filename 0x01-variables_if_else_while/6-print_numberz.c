#include <stdio.h>

/**
 * main - Prints numbers from 1 to 0
 * Return: Always(0)
 *
 */

int main(void)

{
	int x = '0';

	while (x < '10')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
