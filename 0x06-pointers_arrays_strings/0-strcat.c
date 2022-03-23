#include "main.h"
#include <string.h>

/**
 * _strcat - Function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	/*int l1, l2, i;*/
	strcat(dest, src);
/*
	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0;i<=l2;i++)
	{
		dest[l1 + i] = src[i];
	}*/
	return (dest);
}
