#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print alphabets in lowercase
 * Return: Null
 *
 */

void print_alphabet(void)
{
	for (int c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
