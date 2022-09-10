#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d Last digit of  and is greater than 5\n", n);
	else if (n < 6)
		printf("%d Last digit of and is lessthan 6 and not 0\n", n);
	else
		printf("%d Last digit of and is zero\n", n);
	return (0);
}
