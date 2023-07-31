#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: check string
 * @c: character to locate
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
