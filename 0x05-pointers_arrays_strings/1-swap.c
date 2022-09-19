#include "main.h"

/**
 * swap_int - swap the value of integers
 *
 *Return: void
 *@a: value used
 *
 *@b: second value used
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
