#include "main.h"
#include <stdio.h>

/**
  * _puts - A program that prints a string
  * by a new line in stdout
  * @str: the string to print
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
