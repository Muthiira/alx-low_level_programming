#include "main.h"
#include <string.h>
/**
 * _strlen -functions that returns the length of a string
 * @s: string to be check
 * return: length of string
 * _strlen - return unsigned int
 * return : unsigned int
 */
int _strlen(char *s) /* _strlen - return unsigned int */
{
	int count = 0;

	while (*s != '\0')

	{
		count++;
		s++;
	}

	return (count);
}
