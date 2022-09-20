#include "main.h"

/**
 * check the length of a string
 * return 0
 */

int _strlen(char *s) 
{
int length = 0;
while (s[length])
length++;
return (length);
}

