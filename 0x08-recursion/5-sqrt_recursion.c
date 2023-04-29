#include "main.h"
/**
 * _sqrt_recursion - calc the sqrt of a num
 * @n: the num
 * Return: the sqrt of that num or -1
 */
int sqrta(int n, int x);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrta(n, 0));
}
/**
 * sqrta - gets the squarroot
 * @n: to this num
 * @x: using this num
 * Return: the square root or -1
 */
int sqrta(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (sqrta(n, x + 1));
}
