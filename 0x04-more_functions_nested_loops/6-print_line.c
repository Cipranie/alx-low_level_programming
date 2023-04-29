#include <stdio.h>
#include "main.h"

/**
  *print_line - A c program that prints straight line
  *@n: the number of times _ will print
  *Return: void
  */

void print_line(int n)
{
	int q = 0;

	if (n <= 0)
		putchar ('\n');

	while (q < n)
	{
		putchar ('_');
		q++;
	}
	putchar ('\n');
}

