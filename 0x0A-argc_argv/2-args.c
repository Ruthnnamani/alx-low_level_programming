#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc; number of command lines
 * @argv: an array containing the program command line arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
		int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
