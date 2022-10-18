#include "main.h"

/**
 *_islower - check if alphabet is in lower case
 *Return: 1 if lowercase otherwise 0
 *@c:  describes char
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
