#include <stdio.h>
#include "main.h"

/**
 * _isdigit - A program that checks if numbers are 0 - 9
 * @c: is the char to be checked
 *
 * Return: 1 (success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
