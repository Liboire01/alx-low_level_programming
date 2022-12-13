#include "main.h"

/**
 * main - Entry point
 * Write a program that prints _putchar,
 * followed by a new line.
 *
 * Return Always 0 (success)
 */
int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
