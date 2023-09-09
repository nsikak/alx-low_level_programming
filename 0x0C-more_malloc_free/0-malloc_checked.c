#include "main.h"

/**
 *malloc_checked - Allocates memory using malloc
 *Description: Dynamic Mem
 *Return: a pointer to malloc
 *@b: number of bytes
 */

void *malloc_checked(unsigned int b)
{
	void  *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
