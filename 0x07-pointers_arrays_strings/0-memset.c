#include "main.h"
/**
 * _memset - fills a memory with a char
 * @s: the string
 * @b: the charachter
 * @n:n bytes to fill from s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] && i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
