#include "main.h"

/**
 *_strlen_recursion - a recursive finction
 *Description: Recursion
 *Returns: null
 *@s: source
 */

int _strlen_recursion(char *s)
{
	int l;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
