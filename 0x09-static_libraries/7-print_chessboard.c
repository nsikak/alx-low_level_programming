#include "main.h"

/**
 * print_chessboard - strcat
 *Description: just a func
 *Return: char
 *@a: des
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i % 2 == 0 && j % 2 == 0)
			{
				_putchar(' ');
			}
			else if (i % 2 == 1 && j % 2 == 1)
			{
				_putchar(' ');
			}
		else
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
