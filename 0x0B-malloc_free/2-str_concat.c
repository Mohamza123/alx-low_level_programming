#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - cancatenate two strings
 * @s1: first str
 * @s2: second one
 * Return: Null or s1
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = 0, l2 = 0, r = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		l1 = 0;
	else
	{
		while (s1[l1])
			l1++;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		while (s2[l2])
		l2++;
	}

	s1 = (char *)realloc(s1, sizeof(char) * (l1 + l2 + 1));
	while (r <= l2)
	{
			s1[l1 + r] = s2[r];
			r++;
	}
	return (s1);
}
