#include "main.h"

/**
 * _strpbrk - strcat
 *Description: just a func
 *Return: char
 *@accept: dest
 *@s: src
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
