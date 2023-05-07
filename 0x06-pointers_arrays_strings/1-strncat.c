#include <stdio.h>
#include "main.h"

/**
  * _strncat - A function that concatenates two strings
  * but does not terminatebon n
  * @dest: the destination input
  * @src: the source input
  * @n: input
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int j;

	c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[c] = src[j];
		c++;
		j++;
	}
	dest[c] = '\0';
	return (dest);
}
