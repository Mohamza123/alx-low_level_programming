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
	s = 2;
	sum = 2;
	for (i = 0; i < 48; i++)
	{
		if (f + s > 4000000)
		{
			break;
		}
		th = f + s;
		if (th % 2 == 0)
		{
			sum += th;
		}
		f = s;
		s = th;
	}
	printf("%li\n", sum);
	return (0);
}
