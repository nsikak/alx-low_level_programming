/**
 * _strcmp - strcat
 *Description: just a func
 *Return: char
 *@s1: dest
 *@s2: src
 */

int *_strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
