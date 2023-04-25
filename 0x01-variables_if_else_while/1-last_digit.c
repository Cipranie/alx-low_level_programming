#include <stdlib.h>
#include <time.h>
#include <stdio>
/**
 * main  - A print the last five digits of a variable n
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d is greater than 5" n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is zero" n, ld);
	}
	else
	{
		printf("Last digit of %d is %d is less than 6 and not zero" n, ld);
	}
	return (0);
}
