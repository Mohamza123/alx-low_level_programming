#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - generates a random password for crckme
 * Return: 0
 */
int main(void)
{
	char c;
	int lower = 1, upper = 126, i;

	srand(time(NULL));
	i = rand() % (20 - 14 + 1);

	for (; i > 0; i--)
	{
		c = rand() % (upper - lower + 1);
		printf("%c", c);
	}
	return (0);
}
