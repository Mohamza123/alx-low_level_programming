#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
/**
 * print_all - prints anything pased to it
 * @format: c, i, f, s
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sep = ", ";
		}
	}
	va_end(args);
	printf("\n");
}
