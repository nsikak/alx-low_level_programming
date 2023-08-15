#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main code
 * Description:nothing
 * Return: void
 */

int main(void)
{
	char i;
	int z;

	for (z = 0; z < 10; z++)
	{
		putchar(z + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
