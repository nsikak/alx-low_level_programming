#include "main.h"

/**
 *_sqrt_recursion - a recursive finction
 *Description: Recursion
 *Return: null
 *@n: base
 */

int _sqrt_recursion(int n);
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	int mid = n / 2;

	return (_sqrt_recursion(mid) == mid ? mid : _sqrt_recursion(mid + 1));
}
