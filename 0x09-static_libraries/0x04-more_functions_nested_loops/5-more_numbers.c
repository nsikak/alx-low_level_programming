#include "main.h"

/**
 * more_numbers - a function toprint upper
 *Description: None
 *Return: 1
 */

void more_numbers(void)
{
	int z;

	z = 0;

	while (z < 10)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar(i % 10 + '0');
		}

		_putchar('\n');
		z++;
	}
}
