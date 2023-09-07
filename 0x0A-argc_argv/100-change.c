#include <stdio.h>
#include <stdlib.h>

/**
 *main- arguments
 *Description: a
 *Return: 0
 *@argc: count of arg
 *@argv: argument array
 */

int main(int argc, char *argv[])
{
	int c = atoi(argv[1]);
	int j[] = {25, 10, 5, 2, 1};
	int m = 0;
	int s = sizeof(c) / sizeof(j[0]);
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (c < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < s; i++)
	{
		while (c >= j[i])
		{
			c -= j[i];
			m++;
		}
	}

	printf("%d\n", m);

	return (0);
}
