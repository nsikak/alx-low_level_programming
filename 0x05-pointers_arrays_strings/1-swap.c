#include "main.h"

/**
 * swap_int - resets a pointer
 * Description: Just a function
 * Return: 0
 * @a: pointer params
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int temp  = *a;

	*a = *b;
	*b = temp;
}
