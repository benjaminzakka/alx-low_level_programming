#include <stdio.h>

/**
 * bmain - a function executed before main
 * Return: null.
 */

void __attribute__((constructor)) bmain()
{
    printf("You're beat! and yet, you must allow");
    printf(",\nI bore my house upon my back!\n");
}
