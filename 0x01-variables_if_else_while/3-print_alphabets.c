#include <stdio.h>
/**
 * main - print uppercase letters
 * Return: always 0
 */
int main(void)
{
	char Lc;

	for (Lc = 'a'; Lc <= 'z'; Lc++)
		putchar(Lc);

	for (Lc = 'A'; Lc <= 'Z'; Lc++)
		putchar(Lc);

	putchar('\n');

	return (0);
}
