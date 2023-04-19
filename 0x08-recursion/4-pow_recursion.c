#include "main.h"
/**
 * _pow_recursion - x pow y
 * @x: num
 * @y: power to
 * Return: res
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x * 1);
	else
		return (x * _pow_recursion(x, y - 1));
}
