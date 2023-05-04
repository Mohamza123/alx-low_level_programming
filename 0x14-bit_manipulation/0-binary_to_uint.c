#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary to int
 * @b: binary string
 * Return: 0 or the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
