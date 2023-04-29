#include <stdio.h>
#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c: - character to check
  * Return: 1 (success)
  */

int _isupper(int c)
{

	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
			return (1);
	}
	return (0);

}
