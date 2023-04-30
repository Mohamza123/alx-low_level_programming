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
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	new = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	while (s1[r])
	{
		new[r] = s1[r];
		r++;
	}
	l1 = 0;
	while (new[r])
	{
		new[r] = s2[l1];
		r++, l1++;
	}
	new[r] = '\0';
	return (new);
}
