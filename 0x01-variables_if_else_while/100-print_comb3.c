#include <stdio.h>

/**
 * main - Prints numbers from 1 to 0
 * Return: Always(0)
 *
 */

int main(void)

{
	for (int i = '0'; i < '9'; i++)
	{
		for (int j = i + '1'; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i < '8' && j < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
