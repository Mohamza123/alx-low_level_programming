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

	for (i = 0; s[i] != '\0'; i++)
	{
		l = i;
	}
	for (i = 0; i <= l + 1; i++)
	{
		l--;
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
	}
}
