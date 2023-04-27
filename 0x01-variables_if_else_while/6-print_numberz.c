#include <stdio.h>
/**
 * main - A C programme that prints all single
 * digit on base 10 starting from 0 not using printf
 * Return: 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
