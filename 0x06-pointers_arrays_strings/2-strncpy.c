#include "main.h"

/**
 * _strncpy - copy both the null terminator '\0'
 *
 *@dest: vlaue use
 *
 *@src: vlaue used
 *
 *@n: the number of the null terminator
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
