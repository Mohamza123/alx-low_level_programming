#include <stdio.h>
#include <math.h>

/**
 * main - get the largest prime factor of a number
 * Return: always 0
 */
int main(void)
{
	long int n, i;

	n = 612852475143;
	double p = sqrt(n);
	for (i = 0; i <= p; i++)
	{
		if (n % i == 0)
		{
			p = n / i;
		}
	}
	printf("%ld\n", p);
	return (0);
}
