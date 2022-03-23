#include "main.h"
#include <string.h>

/**
 * _strncat - concecrates n bytes from src
 * dest: destiination string
 * src: source string
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
