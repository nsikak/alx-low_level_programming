#include <stdio.h>

/**
 *main- arguments
 *Description: a
 *Return: 0
 *@argc: count of arg
 *@argv: argument array
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
