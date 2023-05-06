#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the string
 * Return: the string reversed
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	while (s[len])
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = s[i];
		len--;
	}
}
