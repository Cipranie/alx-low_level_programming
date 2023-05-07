#include <stdio.h>
#include "main.h"

/**
  * char *_strcpy - a function that copies the string pointed to by src
  * @dest: the pointer to copy to
  * @src: pointer address to copy from
  * Return: string
  */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int m = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; m < l ; m++)
	{
		dest[m] = src[m];
	}
	dest[l] = '\0';
	return (dest);
}
