#include "main.h"

/**
 * _strspn - strcat
 *Description: just a func
 *Return: char
 *@accept: dest
 *@s: src
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return (i);
		}
	}

	return (i);
}
