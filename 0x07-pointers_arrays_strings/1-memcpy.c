#include "main.h"

/**
 *_memcpy - copying memory n-bytes
 *
 *@dest: file destination
 *
 *@src: file srource
 *
 *@n: n-th byte
 *
 *Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


