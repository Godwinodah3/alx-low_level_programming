#include  "main.h"

/**
 * factorial - is the act of finding numbers that are its base
 *
 *@n: represent the number we are looking for
 *
 *Return: -1 if n less than 0; and if the value less or equal 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ( n <= 1)
		{
			return (1);
		}
	return (n * factorial (n - 1));
}
