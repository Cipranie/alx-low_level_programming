#include <stdio.h>
/**
 * main - A C programme to write the alphabets
 * in lower case but in reverse.
 * Return: 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
