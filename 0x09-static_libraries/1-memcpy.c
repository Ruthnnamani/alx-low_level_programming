#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: adding into memory area
 * @src: remove from memory area
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	for (; n != 0; dest_ptr++, n--, src_ptr++)
		*dest_ptr = *src_ptr;
	return (dest);
}
