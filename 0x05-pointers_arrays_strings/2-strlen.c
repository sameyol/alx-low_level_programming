#include "main.h"

/**
 * _strlen - checks the length of a string
 * @si: string to check
 * Return: int length of the string
 *
 */

int _strlen(char *s) 
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

