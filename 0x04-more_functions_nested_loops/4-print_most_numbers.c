#include <stdio.h>
#include "main.h"

/**
  *print_most_numbers - A program that prints numbers 0 - 9
  *without 2 and 4
  *Return: void
  */

void print_most_numbers(void)
{
	int e;

	for (e = 48; e <= 57; e++)
	{
	if (e == 50 || e == 52)
		continue;

	putchar(e);
	}
	putchar('\n');

}
