#include <stdio.h>
#include "main.h"

/**
  * rev_string - A program that prints a string in reverse
  * @s: the string to print
  * Return: 0 (success)
  */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
