#include <stdio.h>

/**
 * main - number that prints all single numbers of base 10
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
