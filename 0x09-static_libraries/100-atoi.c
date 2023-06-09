#include "main.h"
/**
 * _atoi - convert a srting to an integer
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else if (s[i] == '-')
			sign *= -1;
		else if (num > 0)
			break;
	}
	return (num * sign);
}
