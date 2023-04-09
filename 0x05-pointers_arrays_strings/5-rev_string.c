#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the str
 */

void rev_string(char *s)
{
	int i;
	char tmp;
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
	}
}
