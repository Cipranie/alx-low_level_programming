#include <stdio.h>
#include "main.h"
/**
  * print_array - A function that prints numbers(elements) in array
  * @a: Array name to be printed
  * @n: is the number of elements OF the array to be printed
  * Return: a and n inputs
  */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
	printf("%d, ", a[y]);
	}
	if (y == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
