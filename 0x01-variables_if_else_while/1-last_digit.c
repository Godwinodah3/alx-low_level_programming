#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d and is greaterthan 5\n", n);
	if else(n < 6)
			printf("%d and is less than 6 not 0\n", n);
	else
		printf("%d is 0\n", n);
	return (0);
}
