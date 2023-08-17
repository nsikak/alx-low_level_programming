#include "main.h"

/**
 * print_numbers - a function toprint upper
 *Description: None
 *Return: 1
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c + '0');
		_putchar('\n');
	}
}
