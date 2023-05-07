#include <stdio.h>
#include "main.h"

/**
  * _strncpy - A function that copies a string using strncpy fxn
  * @dest: the destination input
  * @src: the source input
  * @n: input
  * Return: dret
  */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	s = 0;

	while (s < n && src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
