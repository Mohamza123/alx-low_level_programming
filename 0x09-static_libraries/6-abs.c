#include "main.h"

/**
 * _abs - computes tha absolute value of integer
 * @c: the number
 * Return: the absolute value
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
