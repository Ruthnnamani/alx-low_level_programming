#include "main.h"
/**
 * puts2 - print other character of a string
 * @str: starting with the first character
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
