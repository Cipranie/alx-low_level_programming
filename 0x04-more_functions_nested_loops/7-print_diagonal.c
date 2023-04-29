#include <stdio.h>
#include "main.h"

/**
  *print_diagonal - a program that prints a diagonal line
  *on the terminal a parrel manner
  *@n: number of times the character prints
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int g, h;

		for (g = 0; g < n; g++)
		{
			for (h = 0; h < n; h++)
			{
				if (h == g)
					putchar('\\');
				else if (h < g)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
