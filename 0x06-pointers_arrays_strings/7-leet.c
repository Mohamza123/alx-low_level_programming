#include "main.h"
/**
 * leet - encode a string
 * @s: the string
 * Return: the string encoded
 */
char *leet(char *s)
{
	int i;
	char ch[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*s)
	{
		for (i = 0; i < 10; i++)
		{
			if (ch[i] == *s)
			{
				*s = code[i];
			}
		}
		s++;
	}
	return (s);
}
