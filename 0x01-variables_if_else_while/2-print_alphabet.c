#include <stdio.h>
/**
 * main - A C programme to write the alphabets in lower case.
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
