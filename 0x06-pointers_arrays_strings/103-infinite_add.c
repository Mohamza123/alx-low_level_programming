#include "main.h"
/**
 * getlen - get length of a string
 * @s: the string
 * Return: len
 */
int getlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	return (l);
}
/**
 * rev - reverse a string
 * @s: the string
 */
void rev(char *s)
{
	int l = getlen(s), i, j;
	char tmp;

	j = l - 1;
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}
}
/**
 * infinite_add - adds two nums
 * @n1: first num
 * @n2: second num
 * @r: the buffer to stor the res
 * @size_r: the buffer size
 * Return: r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry, val1, val2, len1, len2, tmp, i;

	len1 = getlen(n1) - 1;
	len2 = getlen(n2) - 1;
	carry = i = 0;

	if (len1 > size_r || len2 > size_r)
		return (0);
	while (len1 > 0 || len2 > 0 || carry == 1)
	{
		if (i >= size_r)
			return (0);
		if (len1 < 0)
			val1 = 0;
		else
			val1 = n1[len1] - '0';
		if (len2 < 0)
			val2 = 0;
		else
			val2 = n2[len2] - '0';
		tmp = val1 + val2 + carry;
		if (tmp > 9)
		{
			tmp = tmp % 10;
			carry = 1;
		}
		else
			carry = 0;
		r[i] = tmp + '0';
		len1--;
		len2--;
		i++;
	}
	if (i == size_r - 1)
		return (0);
	r[i] = '\0';
	rev(r);
	return (r);
}
