#include "main.h"
/**
 * _strpbrk - get the length of a prefix substring
 * @s: the string
 * @accept: to be scaned
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] == s[i])
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
