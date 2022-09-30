#include "main.h"

/**
 * *_memset - the process of contineous adding a particular byte
 *
 *@s: value used
 *
 *@n: nth value of byte
 *
 *@b: value added continuoussly
 *
 *Return: return pointer 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
