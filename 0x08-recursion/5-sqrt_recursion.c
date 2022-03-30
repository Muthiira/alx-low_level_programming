#include "main.h"
#include <stdio.h>
#include <math.h>


/**
 * _sqrt_recursion - Function returns sqrt of a number
 * @n: integer to be squared
 * Return: _sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
