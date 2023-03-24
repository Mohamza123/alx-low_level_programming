#include "main.h"

/**
 * _isdigit - checks if the input between 0 & 9
 * @c: the input
 * Return: 1 if digit 0 otherwise
 *
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
