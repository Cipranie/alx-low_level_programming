#include <stdio.h>
#include "main.h"

/**
  * print_rev - A program that prints a string in reverse
  * @s: the string to print the reverse.
  * Return: 0 (success)
  */

void print_rev(char *s)
{
	int simbi = 0;
	int o;

	while (*s != '\0')
	{
		simbi++;
		s++;
	}
	s--;
	for (o = simbi; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
