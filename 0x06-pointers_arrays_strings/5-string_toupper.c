#include "main.h"

/**
 * string_toupper - converting lowercase to upper
 *
 *@*: values of string
 *
 *Return: void
 */

char *string_toupper(char *u)
{
	int index;

	for (index = 0; u[index] != '\0'; index++)
	{
		if (u[index] >= 'a' && u[index] <= 'z')
			u[index] = u[index] - 32;
			else
				continue;

	}
	return (u);
}

