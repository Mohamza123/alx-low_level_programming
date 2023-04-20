#include "variadic_functions.h"
/**
 * print_strings - prints string with separator
 * @separator: the string seperator
 * @n: the number of args
 * @...: the strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(aap, char *)) ? str : "(nil)", i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
