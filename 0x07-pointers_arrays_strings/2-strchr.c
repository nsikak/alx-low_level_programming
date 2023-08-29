/**
 * _strchr - strcat
 *Description: just a func
 *Return: char
 *@c: dest
 *@s: src
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
