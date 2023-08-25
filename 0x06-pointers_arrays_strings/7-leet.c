/**
 * leet - strcat
 *Description: just a func
 *Return: char
 *@s: src
 */
char *leet(char *s)
{
	char *ptr = s;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'o' || *s == 'O')
			*s = '0';
		else if (*s == 't' || *s == 'T')
			*str = '7';
		else if (*s == 'l' || *s == 'L')
			*s = '1';
		s++;
	}
	return (ptr);
}
