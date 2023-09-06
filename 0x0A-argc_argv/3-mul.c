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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error");
	}
	return (1);
}
