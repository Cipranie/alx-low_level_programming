#include "main.h"

/**
  * swap_int - A program that swaps the value of two variables
  * using pointers and deference
  * @a: first integer value
  * @b: second integer value
  */

void swap_int(int *a, int *b)
{
	int betty;

	betty = *b;
	*b = *a;
	*a = betty;
}
