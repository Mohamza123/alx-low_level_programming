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
	char *new;

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

	new = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	for (r = 0; r < l1 + l2; r++)
	{
		if (r <= l1)
			new[r] = s1[l1];
		else
			new[r] = s2[r - l1];
	}
	return (s1);
}
