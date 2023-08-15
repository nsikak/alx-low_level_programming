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

	for (i = 'z'; i <= 'z'; i--)
	{
		putchar(i);
		if (i == 'a')
			break;
	}
	putchar('\n');
	return (0);
}
