#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/* addition*/
/**
 * op_add - Returns sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/* subtraction*/
/**
 * op_sub - Return difference of two integers
 *@a: first integer
 *@b: second integer
 *Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/* multiplication*/
/**
 * op_mul - Returns product of two integers
 * @a: First integer
 * @b: Second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/* divsion*/
/**
 * op_div - Returns result of the division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: result of division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/* modulo */
/**
 * op_mod - Returns the remainder of the division of two integers
 * @a: Fisrt integer
 * @b: Second integer
 * Return: remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
