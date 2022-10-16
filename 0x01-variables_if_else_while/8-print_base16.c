#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 * Return: always 0
 */

int main(void)
{
	int hx;
	char ls;

	for (hx = 0 ; hx < 10 ; hx++)
		putchar((hx % 10) + '0');

	for (ls = 'a' ; ls <= 'f' ; ls++)
		putchar(ls);

	return (0);
}
