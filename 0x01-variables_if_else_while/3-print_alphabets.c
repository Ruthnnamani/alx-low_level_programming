#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabeths in lowercase and then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}

