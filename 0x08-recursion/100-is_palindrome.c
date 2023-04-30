#include "main.h"
/**
 * is_p - is pal or not
 * @f: first of the string
 * @l: last of the string
 * @s: the string
 * Return: 1 or 0
 */
int is_p(int f, int l, char *s)
{
	if (s[f] != s[l - 1])
		return (0);
	else if (f == l - 1 || f + 1 == l - 1)
		return (1);
	else
		return (is_p(f + 1, l - 1, s));
}
/**
 * len - get the length of a string
 * @s: the string
 * Return: the length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}
/**
 * is_palindrome - check a string
 * @s: the string
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int l = len(s);

	if (l <= 1)
		return (1);
	else
		return (is_p(0, l, s));
}
