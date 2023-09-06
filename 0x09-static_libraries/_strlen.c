#include "main.h"

/**
 * _strlen - resets a pointer
 * Description: Just a function
 * Return: 0
 * @s: pointer params
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
