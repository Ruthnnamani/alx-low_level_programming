#include "main.h"
/**
 * _islower - Entry point
 * @c: check character
 * Return: 1 for lowercase or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
