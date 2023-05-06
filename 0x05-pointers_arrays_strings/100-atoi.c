#include "main.h"
/**
 * _atoi - convert a string to number
 * @s: the string
 * Return: n
 */
int _atoi(char *s)
{
	int i = 0, num = 0;
	int sign = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	if (sign % 2 == 1)
		num = num * -1;

	return (num);
}
