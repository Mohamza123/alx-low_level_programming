#include <stdio.h>

/**
 * main - print the sum of multiplies of 3 and 5
 * Return: always 0
 *
 */

int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 1023; i > 2; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", sum);
	return (0);
}
