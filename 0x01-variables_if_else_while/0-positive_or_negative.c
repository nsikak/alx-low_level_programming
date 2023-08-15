#include <stdlib.h>
#include <time.h>

/**
 * main - Main code
 * Description:nothing
 * Return: void
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if n > 0
		printf("%x is positive", n);
	else if n == 0
		printf("%x is zero, n");
	else
		printf("%x is negative");
	return (0);
}
