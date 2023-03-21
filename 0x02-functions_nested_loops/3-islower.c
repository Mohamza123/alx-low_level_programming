#include "main.h"

/**
 * _islower - checks lowercase charachters
 * @c: check that
 * Return: 1 if lowercase 0 otherwise
 *
 */
int _islower(int c)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
