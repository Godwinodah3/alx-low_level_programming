#include "main.h"

/**
 * _print_rev_recursion - print string in revere
 *
 *@s: pointer string pointing to the string
 *
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
