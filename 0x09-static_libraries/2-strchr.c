#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: check string
 * @c: character to locate
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
