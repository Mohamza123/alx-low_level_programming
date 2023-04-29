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
	if (s[f] != s[l])
		return (0);
	else if (f == l || f + 1 == l)
		return (1);
	else
		return (is_p(f + 1, l - 1, *s));
}

/**
 * is_palindrome - check a string
 * @s: the string
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	if (l <= 1)
		return (1);
	else
		return (is_p(0, l, *s));
}
