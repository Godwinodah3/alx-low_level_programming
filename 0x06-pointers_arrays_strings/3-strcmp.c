#include "main.h"

/**
 * _strcmp - comparing two strings using this inbuilt function in c
 *
 *@s1: value used in the comparison
 *
 *@s2: second value compare to
 *
 *Return: any inter greater, less than 0 if result is true or false
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			if (s2[i] != '\0')
			{
				diff = s1[i] - s2[i];
				break;
			}
		}
	}
	return (diff);
}
