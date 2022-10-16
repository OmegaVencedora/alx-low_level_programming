#include <stdio.h>

/**
 * main - prints alphabets apart from q and e
 * Return: always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la);
	}

	putchar('\n');

	return(0);
