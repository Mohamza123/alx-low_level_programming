#include "main.h"

/**
 * _isalpha - checks for alphabetic charachter
 * @c: check it
 * Return: if letter 1 otherwise 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
