#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings on a new line
 * @separator: string to be printed between string
 * @n: number of string
 * @...: exact string printed
 *
 * Description: This function prints a variable number of strings, separated by
 * the provided separator string. If a string is NULL, it prints "(nil)".
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list b;
	unsigned int i;
	char *str;

	va_start(b, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(b, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(b);
	printf("\n");
}
