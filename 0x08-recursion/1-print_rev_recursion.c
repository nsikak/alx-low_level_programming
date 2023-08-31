#include "main.h"

/**
 *set_string - a recursive finction
 *Description: Recursion
 *Returns: null
 *@s: source
 *@to: dest
 */

void set_string(char **s, char *to);
{
	char temp;

	if (*s != '\0')
	{
		temp = *s;
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
