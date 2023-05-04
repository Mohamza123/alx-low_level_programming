#include "main.h"
/**
 * binary_to_uint - convert binary to int
 * @b: binary string
 * Return: 0 or the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	int arr = {1, 2, 4, 8, 16, 32, 64, 128};
	unsigned int i, num, len = 0;

	num = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' || b[len] != '1')
			return (0);
		len++;
	}
	for (i = 0; i < 8; i++)
	{
		if (len == 0)
			break;
		if (b[len] == '1')
			num += arr[i];
		len--;
	}
	return (num);
}
