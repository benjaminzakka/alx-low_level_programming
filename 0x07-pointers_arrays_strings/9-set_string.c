#include "main.h"

/**
 * set_string - this sets the value of a pointer to a char
 * @s: the source address.
 * @to: the target address.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
