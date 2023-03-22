#include <stdio.h>

/**
 * main - to clculate fibonacci for the first 50;
 * Return: always 0
 *
 */
int main(void)
{
	long int f, s, i, th, sum;

	f = 1;
	printf("1, ");
	s = 2;
	printf("2, ");
	for (i = 0; i < 48; i++)
	{
		th = f + s;
		if (th >= 4000000)
		{
			if (th % 2 == 0)
			{
				sum += th;
			}
			f = s;
			s = th;
			printf("%li", th);
		}

	}
	printf("%li\n", sum);
	return (0);
}
