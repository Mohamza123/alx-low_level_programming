#include <stdio.h>

/**
 * main - to clculate fibonacci for the first 50;
 * Return: always 0
 *
 */
int main(void)
{
	int f, s, i, th;

	f = 1;
	printf("1, ");
	s = 2;
	printf("2, ");
	for (i = 0; i <= 48; i++)
	{
		th = f + s;
		f = s;
		s = th;
		printf("%i", th);
		if (i < 48)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);
}
