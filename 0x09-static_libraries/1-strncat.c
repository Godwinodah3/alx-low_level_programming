#include "main.h"

/**
 * _strncat - strncat is thesame as strcat but have more advantage
 *
 *@dest: value use
 *
 *@src: value use
 *
 *@n: size of the bytes
 *
 *Return: dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
