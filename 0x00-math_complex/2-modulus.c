#include "holberton.h"
/**
 * modulus - returns the modulus of a given complex number
 * @c: complex
 * Return: double
 */
double modulus(complex c)
{
	return(sqrt(pow(c.re, 2) + pow(c.im, 2)));
}
