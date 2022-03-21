#include "main.h"
#include <string.h>
/**
 * _strlen -functions that returns the length of a string
 * @s: string to be check
 * return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (1)
	{
		if (*(s + count) == '\0')
		{
			break;
		}
		count++;
	}

	return (count);
}
