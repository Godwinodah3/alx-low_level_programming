#include <stdio.h>

/**
 * main - a function to out write yourname command
 *
 *@argc: count
 *
 *@argv: pointer to a string
 *
 *Return: argc, argv
 */

int main(int argc, char *argv[])
{
	printf("%s \n", argv[0]);
	return (argc);
}
