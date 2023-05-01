#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main  - A C program that will assign a randon number to n
 * Return: 0 (success)
 */

void positive_or_negative(int i)
{
	
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
