#include <stdio.h>
#include "main.h"

/**
  * print_chessboard - A function that prints the chess board
  * @a: function array
  * Return: 0 (success)
  */

void print_chessboard(char (*a)[8])
{
	int q;
	int j;

	for (q = 0; q < 8; q++)
	{
		for (j = 0; j < 8; j++)
			putchar(a[q][j]);
		putchar('\n');
	}
}
