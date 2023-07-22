#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c - check character
 *
 * Return: 1 is a lower case or uppercase or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
