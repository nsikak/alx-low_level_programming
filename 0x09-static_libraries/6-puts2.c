#include "main.h"

/**
 * puts2 - resets a pointer
 * Description: Just a function
 * Return: 0
 * @str: pointer params
 */

void put(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
