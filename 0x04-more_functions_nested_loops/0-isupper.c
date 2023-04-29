#include <stdio.h>
#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c - character to check
  * Return: 1 (success)
  */
 
int _isupper(int c)
{
	/*
	int s;

	for (s=65; s<=90; s++)
	{
		if (c==s)
			return 1;
	}
	return 0;
	*/

	char ch;

	for (ch='A'; ch<='Z'; ch++)
	{
		if (c==ch)
			return 1;
	}
	return 0;
	
}
