#include "main.h"
#include <stdio.h>

/**
 * main - checks my code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "wworld of this";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}