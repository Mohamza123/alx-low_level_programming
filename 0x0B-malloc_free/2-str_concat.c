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
	unsigned int l1 = 0, l2 = 0, r;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	s1 = (char *)realloc(s1, sizeof(char) * (l1 + l2 + 1));
	for (r = 0; r < (l2 + 1); r++, l1++)
	{
			s1[l1 + 1] = s2[r];
	}
	return (s1);
}
