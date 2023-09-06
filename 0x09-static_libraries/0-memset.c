/**
 * _memset - strcat
 *Description: just a func
 *Return: char
 *@b: dest
 *@s: src
 *@n : int
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
