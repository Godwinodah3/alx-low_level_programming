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

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d \n", argc -1);
	return (0);
}
