#include "main.h"
/**
 * _memset - it fills memory with a constant byte,
 * @s: the memory area.
 * @b: this is a constant byte.
 * @n: number of bytes filled.
 * Return: returns the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
