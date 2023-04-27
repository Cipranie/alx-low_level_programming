#include <stdio.h>
/**
 * main - A C programme to write numbers in base 16 in lower case.
 * Return: 0 (success)
 */
int main(void)
{
	int n = 48;
	int k = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (k <= 102)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
