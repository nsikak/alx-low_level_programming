#include "main.h"

/**
 * print_diagonal - a function toprint upper
 *Description: None
 *Return: 1
 *@n: num of lines
 */

void print_diagonal(int n)
{
	int i;

	i = 1;
	for (i = 1; i <= n; i++)
	{
		if (i > 1)
		{
			int z;

			z = 1;
			while (z < i)
			{
				_putchar(32);
				z++;
			}
		}
		_putchar(92);
		if (i != n)
			_putchar('\n');
	}
	_putchar('\n');
}
