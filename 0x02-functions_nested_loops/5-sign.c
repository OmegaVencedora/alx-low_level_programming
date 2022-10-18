#include "main.h"

/**
 *print_sign - prints number as compared to zero
 *@n: char to be compared to
 *Return: 0+- depending if its greater less or equals0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
