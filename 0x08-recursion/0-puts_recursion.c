#include "main.h"

/**
 *_puts_recursion - a recursive finction
 *Description: Recursion
 *Returns: null
 *@s: s
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
