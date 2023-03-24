#include "main.h"
/**
 * _isupper - checks for upper case character
 * @c: the input charachter
 * Return: 1 if upper 0 otherwise
 *
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

