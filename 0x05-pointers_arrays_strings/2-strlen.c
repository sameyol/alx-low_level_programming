#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

int _strlen(char *s)
{
	int length = 0;
	while (s[length])
		length++;
	return (length);
}
