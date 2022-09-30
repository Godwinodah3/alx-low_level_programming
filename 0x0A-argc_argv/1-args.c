#include <stdio.h>

/**
 * main - print number of item passed into a function
 *
 *@argc: counter
 *
 *@argv: pointer pointing to a string
 *
 *Return: charater
*/

int main(int argc, char *argv[])
{
	*argv = 0;

	printf("%d \n", argc);
	return (0);
}
