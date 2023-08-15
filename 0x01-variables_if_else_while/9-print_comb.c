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
	int z;

	for (z = 0; z < 10; z++)
	{
		putchar(z + '0');
		if (z < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
