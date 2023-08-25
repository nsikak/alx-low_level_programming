/**
 * string_toupper - strcat
 *Description: just a func
 *Return: char
 *@s: src
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += 32;
	}
	return (s);

}
