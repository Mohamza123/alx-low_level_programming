#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int start, i, end, flag, ends;
	if (size <= 0)
		printf("\n");

	i = flag = 0;
	while (i < size)
	{
		printf("%08x:", i);
		if (i + 10 < size)
			end = i + 10;
		else
			end = size;
		ends = i + 10;
		for (start = i; start < ends; start++)
		{
			if (start == end - 2 || start % 2 == 0)
				printf(" ");
			if (start >= size)
				printf("  ");
			else
				printf("%02x", b[start]);
		}
		printf(" ");
		for (start = i; start < end; start++)
		{
			if (b[start] >= 127 || b[start] < 32)
				printf(".");
			else
				printf("%c", b[start]);
		}
		i = end;
		printf("\n");
	}
}
