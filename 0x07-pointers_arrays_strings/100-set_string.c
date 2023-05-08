#include <stdio.h>
#include "main.h"

/**
  * set_string - a function that sets the value of a pointer to a char.
  * @s: pointer to another pointer
  * @to: the pointer character
  * Return: 0
  */

void set_string(char **s, char *to)
{
	*s = to;
}
