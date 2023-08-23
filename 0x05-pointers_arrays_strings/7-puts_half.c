#include "main.h"

/**
 * puts_half - resets a pointer
 * Description: Just a function
 * Return: 0
 * @str: pointer params
 */

void puts_half(char *str)
{
	int l = 0;
	int s;

	while (str[l] != '\0')
	{
		l++;
	}
	s = (l + 1) / 2;

	while (str[s] !=  '\0')
	{
		_putchar(str[s]);
		s++;
	}
}
