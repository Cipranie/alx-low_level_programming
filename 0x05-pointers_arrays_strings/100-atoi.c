#include <stdio.h>
#include "main.h"

/**
  * _atoi - a function that converts a string to an integer
  * @s: string to be converted
  * Return: the int converted from the string
  */

int _atoi(char *s)
{
	int h, d, n, len, f, digit;

	h = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (h < len && f == 0)
	{
		if (s[h] == '-')
			++d;

		if (s[h] >= '0' && s[h] <= '9')
		{
			digit = s[h] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			f = 0;
		}
		h++;
	}

	if (f == 0)
		return (0);

	return (n);
}
