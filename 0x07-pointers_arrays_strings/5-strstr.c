#include <stdio.h>
#include "main.h"

/**
  *_strstr - A function that locates a substring entry point
  * @haystack: input
  * @needle: input
  * Return: Always 0 (Success)
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

