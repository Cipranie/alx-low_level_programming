#include "main.h"

/**
  * _strlen - A program that prints the lenght of a string
  * @s: the string to count
  * Return: the number of char
  */

int _strlen(char *s)
{
	int se, ra;

	se = 0;
	ra = 0;
	while (s[se] != '\0')
	{
		ra += 1; /* ra = ra + 1 */
		se++;
	}
	return (ra);
}
