#include "main.h"
#include <string.h>
/**
 * _strlen - Function that returns the length of a string
 * @s: String to be check
 * Return: Length of a string
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
