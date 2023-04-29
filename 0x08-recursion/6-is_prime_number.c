#include "main.h"
/**
 * isprime - is prime
 * @x: from 0
 * @n: to n
 * Return: 1 if prime 0 otherwise
 */
int isprime(int x, int n)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (isprime(x + 1, n));
}
/**
 * is_prime_number - is a prime or not
 * @n: the number
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (isprime(2, n));
}
