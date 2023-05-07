#include <stdio.h>
#include "main.h"

/**
  * puts_half - A function that prints half of the string
  * and prints the other half, where lenght is /2
  * @str: string input to print
  * Return: half of input
  */

void puts_half(char *str)
{
	int a;
	int b;
	int eby;

	eby = 0;

	for (a = 0; str[a] != '\0'; a++)
		eby++;
	b = (eby / 2);

	if ((eby % 2) == 1)
		b = ((eby + 1) / 2);
	for (a = b; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}

