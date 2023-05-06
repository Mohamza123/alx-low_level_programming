#include "main.h"
/**
 * swap - swap two chars
 * @s1: first char
 * @s2: second char
 */
void swap(char *s1, char *s2)
{
	char tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
/**
 * rev_string - reverse the string
 * @s: the string
 * Return: the string reversed
 */
void rev_string(char *s)
{
	int i, len = 0, l;

	while (s[len])
		len++;
	l = len;

	for (i = 0; i < l / 2; i++)
	{
		len--;
		swap(&s[i], &s[len]);
	}
}
