#include <stdio.h>
#include "main.h"

/**
  *more_numbers - A program that prints numbers
  *from 0 to 14 ten times in a new line
  *the outer for_loop for vertical alignment
  *while the inner_ for_loop is for the horizontl
  *Return: 0 (success)
  */

void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				putchar (n / 10 + '0');
			putchar (n % 10 + '0');
		}
		putchar ('\n');
	}
}

