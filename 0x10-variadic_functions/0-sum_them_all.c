#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters
 * ...: sum of pointers
 * Return: success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		j += va_arg(args, int);
	}

	va_end(args);

	return (j);
}
