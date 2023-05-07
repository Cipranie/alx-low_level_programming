#include <stdio.h>
#include "main.h"

/**
  * puts2 - A function that prints tevery other character in a string
  * starting withthe first character
  * @str: the string to print
  * Return: print
  */

void puts2(char *str)
{
	int sam = 0;
	int c = 0;
	char *q = str;
	int o;

	while (*q != '\0')
	{
		q++;
		sam++;
	}
	c = sam - 1;
	for (o = 0 ; o <= c ; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
