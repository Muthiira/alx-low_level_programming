#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to be check
 * return: unsigned int
 */

int _strlen(char *s) /* s = &str[0] */
{
	int count = 0;
	while (*s != '\0')

	{
		count++;
		s++;
	}
	return count;
}
