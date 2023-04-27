#include <stdio.h>
/**
 * main - A C programme to write the alphabets in lower then upper case.
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int k = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	while (k <= 90)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
