#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the str
 */

void rev_string(char *s)
{
	int i, j, l, tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = i;
	}
	for (i = l; i > l / 2; i--)
	{
		j = 0;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
