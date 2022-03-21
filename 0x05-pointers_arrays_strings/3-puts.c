#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str - string to be printed
 * return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (1)
	{
		if (*(str + i) != '\0')
			_putchar(*(str + i));
		else
			break;

		i++;
	}
	_putchar(10);
}
