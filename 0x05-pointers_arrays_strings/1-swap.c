#include "main.h"

/**
 * swap_int - the value of two integers
 * @a: first value
 * @b: second value
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
