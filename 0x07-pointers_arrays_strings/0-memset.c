#include "main.h"

/**
 * _memeset - fills the first half of memeory area
 * @s: a pointer to the memory area to be filled
 * @c: the character to fill area with
 * @n: the number of bytes to be filled
 * Return: pointet to filled memeory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return(memory);
}
