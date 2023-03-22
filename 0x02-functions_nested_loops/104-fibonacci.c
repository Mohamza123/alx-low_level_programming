#include <stdio.h>

/**
 * main - to clculate fibonacci for the first 50;
 * Return: always 0
 *
 */
int main(void)
{
	unsigned long  f, s, i, th;

	f = 1;
	printf("1, ");
	s = 2;
	printf("2, ");
	for (i = 0; i < 96; i++)
	{
		th = f + s;
		f = s;
		s = th;
		printf("%lu", th);
		if (i < 95)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);
}
