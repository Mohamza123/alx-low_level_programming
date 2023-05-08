#include "main.h"
/**
 * print_number - prints a number
 * @n: the num
 */
void print_number(int n)
{
	int carry = 0, tmp = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n != 0)
	{	
		while (n != 0)
		{
			carry = n % 10;
			tmp = (10 * tmp) + carry;
			n /= 10;
		}
		while (tmp != 0)
		{
			carry = tmp % 10;
			_putchar(carry + '0');
			tmp /= 10;
		}
	}
	else
		_putchar('0');
}
