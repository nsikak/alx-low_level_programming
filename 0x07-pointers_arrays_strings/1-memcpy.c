/**
 * _memcpy - strcat
 *Description: just a func
 *Return: char
 *@dest: dest
 *@src: src
 *@n : int
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest[i]);
}
