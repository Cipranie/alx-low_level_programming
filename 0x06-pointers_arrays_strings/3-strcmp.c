#include <stdio.h>
#include "main.h"

/**
  * _strcmp - a function that compares two strings
  * @s1: string input value
  * @s2: thesecond string input
  * Return: s1[i]
  */

int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;

	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
		b++;
	}
	return (0);
}
