#include "main.h"
/**
 * factorial - returns a factorial of a number
 * @n: the number
 * Return: factorial of the num
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
