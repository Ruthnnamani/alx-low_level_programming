#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (i = j - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
