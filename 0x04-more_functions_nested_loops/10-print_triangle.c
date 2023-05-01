#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int m, n;

		for (m = 1; m <= size; m++)
		{
			for (n = m; n < size; n++)
			{
				putchar(' ');
			}

			for (n = 1; n <= m; n++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}
