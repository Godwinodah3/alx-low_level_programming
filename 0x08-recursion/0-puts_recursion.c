#include "main.h"

/**
 *_puts_recursion - out / printing the
 *
 *@s: the pointer used to print out the string
 *
 *Return: the value when *s == '\0'
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
