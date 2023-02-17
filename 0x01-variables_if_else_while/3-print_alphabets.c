#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, a;

	i = 97;
	a = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (a < 91)
	{
		putchar(a);
		a++;
	}

	putchar(10);

	return (0);
}
