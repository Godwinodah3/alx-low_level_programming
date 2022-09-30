#include "main.h"

/**
 *_isupper - Check for if 'c' uppercase in a charater
 *
 *@c: ascil value to be used
 *
 *Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
