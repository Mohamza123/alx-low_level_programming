#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first one
 * @s2: second one
 * Return: integer contains 0 if mathced
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			n = ((int)*s1 - 0) - ((int)*s2 - 0);
			break;
		}
		s1++;
		s2++;
	}
	return (n);
}
