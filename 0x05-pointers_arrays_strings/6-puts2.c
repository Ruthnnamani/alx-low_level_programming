#include "main.h"
/**
 * puts2 - print other character of a string
 * @str: starting with the first character
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
