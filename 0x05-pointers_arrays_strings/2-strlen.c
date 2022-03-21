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

	for (i = 0; *s[i] != '\0'; i++)
	{
		if (*s[i] != ' ')

		{
			count++;
		}
		return (count);
	}
}
