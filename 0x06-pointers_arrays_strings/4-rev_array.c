#include "main.h"

/**
 * reverse_array - reversing the figurrs
 *
 *@a: valueof string
 *
 *@n: length of string
 */

void reverse_array(int *a, int n)
{
	int index;
	int store;

	for (index = 0; index < n / 2; index++)
	{
		store = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = store;
	}
}
