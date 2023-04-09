#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the str
 */

void rev_string(char *s)
{
	int i, l, tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = i;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
	}
}
