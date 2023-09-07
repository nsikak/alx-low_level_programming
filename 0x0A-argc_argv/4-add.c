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
	int sum = 0; 
	int j = 0;
	int i = 1;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = atoi(argv[i]) + sum;
	}

	printf("%d\n", sum);

	return (0);
}
