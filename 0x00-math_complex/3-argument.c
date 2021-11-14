#include "holberton.h"
/**
 * argument - returns the argument of a given complex number.
 * @c: complex
 * Return: double
 */
double argument(complex c)
{
	double i, resul;

	i = c.im / c.re;
	resul = atan (i);

	return (resul);
}
