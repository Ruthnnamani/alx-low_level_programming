#include "main.h"
/**
 * _memset - memset function
 * @s: address of memory
 * @b: value
 * @n: number of bytes
 * Return: new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
