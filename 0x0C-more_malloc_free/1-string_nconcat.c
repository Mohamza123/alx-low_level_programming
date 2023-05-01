#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: secont string
 * @n: len of sec string to concat
 * Return: NULL or pointer to the new sstring
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, l;
	char *new;

	l = i = j = 0;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	if (n >= j)
		n = j;
	new = malloc((n + i + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (s1[l])
	{
		new[l] = s1[l];
		l++;
	}
	j = 0;
	while (s2[j] && j <= n)
	{
		new[l] = s2[j];
		j++;
		l++;
	}
	new[l + 1] = '\0';
	return (new);
}
